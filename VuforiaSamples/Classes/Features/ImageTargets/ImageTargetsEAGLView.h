/*===============================================================================
Copyright (c) 2016 PTC Inc. All Rights Reserved.

Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
 
 AWkw6en/////AAAAGW/VS5QBt0xflhudLgQESoIvpWXkR4s73zfiRLAvUdGnzDqsC/iZS/BLPpp4JAjErD9lbiLWyuu4fZQC08anldlG2K9GaVzrlbr0jOSlOPZw703Ys+5Cj+sJch6Z4dymzoeV1dx3YDhPIEP2DITqf4d0t5/CJ52Lq0aWl8uHVSDGi8WTeKZ2JJXRe5K9KIODtV0nvOpKxJ9XZdPW6txorEUNsnllgdI6sGyifRKXv9sxmITcRx2YgYqMCJsJVNf3o6ayw08iOkFa9d+eRQUl4bmdLz481X0pGWkTEaK4/DqWoSEAaVCOs7p3rjQDlH0f+sqWMIsAbreUINbqTD6w+228vARDMRMJeemZczf1NwNS

===============================================================================*/

#import <UIKit/UIKit.h>

#import <Vuforia/UIGLViewProtocol.h>

#import "Texture.h"
#import "SampleApplicationSession.h"
#import "SampleApplication3DModel.h"
#import "SampleGLResourceHandler.h"
#import "SampleAppRenderer.h"

#define kNumAugmentationTextures 4


// EAGLView is a subclass of UIView and conforms to the informal protocol
// UIGLViewProtocol
@interface ImageTargetsEAGLView : UIView <UIGLViewProtocol, SampleGLResourceHandler, SampleAppRendererControl> {
@private
    // OpenGL ES context
    EAGLContext *context;
    
    // The OpenGL ES names for the framebuffer and renderbuffers used to render
    // to this view
    GLuint defaultFramebuffer;
    GLuint colorRenderbuffer;
    GLuint depthRenderbuffer;

    // Shader handles
    GLuint shaderProgramID;
    GLint vertexHandle;
    GLint normalHandle;
    GLint textureCoordHandle;
    GLint mvpMatrixHandle;
    GLint texSampler2DHandle;
    
    // Texture used when rendering augmentation
    Texture* augmentationTexture[kNumAugmentationTextures];
    
    BOOL offTargetTrackingEnabled;
    SampleApplication3DModel * buildingModel;
    
    SampleAppRenderer * sampleAppRenderer;
}

@property (nonatomic, weak) SampleApplicationSession * vapp;

- (id)initWithFrame:(CGRect)frame appSession:(SampleApplicationSession *) app;

- (void)finishOpenGLESCommands;
- (void)freeOpenGLESResources;

- (void) setOffTargetTrackingMode:(BOOL) enabled;
- (void)configureVideoBackgroundWithViewWidth:(float)viewWidth andHeight:(float)viewHeight;
- (void) updateRenderingPrimitives;
@end

/*===============================================================================
Copyright (c) 2016 PTC Inc. All Rights Reserved.

Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
 
 AWkw6en/////AAAAGW/VS5QBt0xflhudLgQESoIvpWXkR4s73zfiRLAvUdGnzDqsC/iZS/BLPpp4JAjErD9lbiLWyuu4fZQC08anldlG2K9GaVzrlbr0jOSlOPZw703Ys+5Cj+sJch6Z4dymzoeV1dx3YDhPIEP2DITqf4d0t5/CJ52Lq0aWl8uHVSDGi8WTeKZ2JJXRe5K9KIODtV0nvOpKxJ9XZdPW6txorEUNsnllgdI6sGyifRKXv9sxmITcRx2YgYqMCJsJVNf3o6ayw08iOkFa9d+eRQUl4bmdLz481X0pGWkTEaK4/DqWoSEAaVCOs7p3rjQDlH0f+sqWMIsAbreUINbqTD6w+228vARDMRMJeemZczf1NwNS

===============================================================================*/

#import <UIKit/UIKit.h>
#import "ImageTargetsEAGLView.h"
#import "SampleApplicationSession.h"
#import "SampleAppMenuViewController.h"
#import <Vuforia/DataSet.h>

@interface ImageTargetsViewController : UIViewController <SampleApplicationControl, SampleAppMenuDelegate> {
    
    Vuforia::DataSet*  dataSetCurrent;
    Vuforia::DataSet*  dataSetTarmac;
    Vuforia::DataSet*  dataSetStonesAndChips;
    
    BOOL switchToTarmac;
    BOOL switchToStonesAndChips;
    
    // menu options
    BOOL extendedTrackingEnabled;
    BOOL continuousAutofocusEnabled;
    BOOL flashEnabled;
    BOOL frontCameraEnabled;
}

@property (nonatomic, strong) ImageTargetsEAGLView* eaglView;
@property (nonatomic, strong) UITapGestureRecognizer * tapGestureRecognizer;
@property (nonatomic, strong) SampleApplicationSession * vapp;

@property (nonatomic, readwrite) BOOL showingMenu;

@end

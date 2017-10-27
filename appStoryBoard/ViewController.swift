//
//  ViewController.swift
//  appStoryBoard
//
//  Created by C3T Hacker on 10/23/17.
//  Copyright © 2017 Apple Inc. All rights reserved.

//THIS IS A TEST//
//

import UIKit
import ARKit

class ViewController: UIViewController {
    
    @IBOutlet weak var sceneView: ARSCNView!
    
    @IBAction func startButton(_ sender: Any) {
        performSegue(withIdentifier: "startSegue", sender: self)
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        let scene = SCNScene()
        sceneView.scene = scene
        
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        let configuration = ARWorldTrackingConfiguration()//trackingsession?
        sceneView.session.run(configuration)
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}


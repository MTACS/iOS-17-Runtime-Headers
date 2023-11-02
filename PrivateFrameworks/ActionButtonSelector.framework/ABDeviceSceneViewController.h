
@interface ABDeviceSceneViewController : UIViewController <SCNSceneRendererDelegate> {
    <ABDeviceSceneViewControllerDelegate> * _delegate;
    ABDeviceDisplayView * _displayView;
    id  _resourceLoadingToken;
    struct ABDeviceSceneModel { 
        SCNScene *scene; 
        SCNNode *deviceNode; 
        SCNNode *displayNode; 
        struct ABDeviceSceneButtonModel { 
            SCNNode *bodyNode; 
            SCNNode *muteWallNode; 
            SCNNode *buttonBlockingNode; 
            SCNNode *capNode; 
            SCNNode *capNodeHighlight; 
            SCNNode *sidesNode; 
            SCNNode *sidesNodeHighlight; 
            struct SCNMatrix4 { 
                float m11; 
                float m12; 
                float m13; 
                float m14; 
                float m21; 
                float m22; 
                float m23; 
                float m24; 
                float m31; 
                float m32; 
                float m33; 
                float m34; 
                float m41; 
                float m42; 
                float m43; 
                float m44; 
            } highlightTransform; 
        } buttonModel; 
    }  _sceneModel;
    SCNView * _sceneView;
    <UITraitChangeRegistration> * _traitRegistration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_renderWithTargetTimestamp:(double)arg1 duration:(double)arg2 renderInputs:(struct ABDeviceSceneRenderInputs { struct CATransform3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; double x_1_1_11; double x_1_1_12; double x_1_1_13; double x_1_1_14; double x_1_1_15; double x_1_1_16; } x1; struct ABDeviceSceneCameraAndLight { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; double x_2_1_5; } x2; struct ABDeviceSceneButtonHighlight { id x_3_1_1; double x_3_1_2; } x3; double x4; long long x5; })arg3;
- (void)_setupSceneIfNeeded;
- (void)_updateForLayoutDirection;
- (void)dealloc;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end

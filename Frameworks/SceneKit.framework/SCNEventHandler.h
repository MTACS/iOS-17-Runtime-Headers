
@interface SCNEventHandler : NSObject {
    bool  _autoSwitchToFreeCamera;
    bool  _enableFreeCamera;
    SCNView * _view;
}

@property bool autoSwitchToFreeCamera;
@property bool enableFreeCamera;
@property (readonly) SCNNode *freeCamera;
@property (readonly) SCNView *view;

- (void)activateFreeCamera;
- (bool)autoSwitchToFreeCamera;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)dealloc;
- (bool)enableFreeCamera;
- (id)freeCamera;
- (id)gestureRecognizers;
- (id)init;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setAutoSwitchToFreeCamera:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableFreeCamera:(bool)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (bool)wantsRedraw;

@end

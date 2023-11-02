
@interface EDAppDelegate : UIResponder <EDLensViewDelegate, FBSSceneDelegate, NSXPCListenerDelegate, UIApplicationDelegate> {
    EDLensView * _activeLensView;
    <BSInvalidatable> * _hidePointerAssertion;
    bool  _isFloating;
    double  _lastDismissedTime;
    NSMutableDictionary * _lastDisplayLocationByDisplayIdentifier;
    NSMutableArray * _liveConnections;
    NSMutableDictionary * _mousePointerServiceAssertionByDisplayIdentifier;
    int  _notifyTokenLocked;
    PSPointerClientController * _pointerClientController;
    NSMutableDictionary * _sceneDelegateByDisplayIdentifier;
    bool  _selectedColor;
    NSXPCListener * _serviceListener;
    BKSTouchStream * _touchStream;
}

@property (nonatomic, readonly) EDLensView *activeLensView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_enumerateRemoteClientsUsingBlock:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })_lastDisplayLocationForLensView:(id)arg1;
- (void)_sceneDidDisconnect:(id)arg1;
- (void)_sceneWillConnect:(id)arg1;
- (struct CGPoint { double x1; double x2; })_startingPointForWindow:(id)arg1;
- (void)_updateLastDisplayLocation:(struct CGPoint { double x1; double x2; })arg1 forLensView:(id)arg2;
- (id)activeLensView;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)beginShowingEyeDropper:(id)arg1;
- (void)cancelShowingEyeDropper;
- (void)dismissEyedropper;
- (void)floatEyeDropper;
- (void)hideSystemPointer:(bool)arg1;
- (id)init;
- (void)lensView:(id)arg1 didSelectColor:(id)arg2;
- (void)lensViewDidActivate:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)lockStateChanged;
- (id)mainScreenLensView;
- (id)mainScreenWindow;
- (void)performOnAllWindows:(id /* block */)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;

@end

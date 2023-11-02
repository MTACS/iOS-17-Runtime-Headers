
@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBDeviceApplicationSceneOverlayViewController, SBTraitsParticipantDelegate> {
    SBWindowSelfHostWrapper * _appOverlayHostWrapper;
    SBIsolatedSceneOrientationFollowingWindow * _appOverlayWindow;
    SBIsolatedSceneOrientationFollowingContainerView * _containerView;
    UIViewController * _contentViewController;
    bool  _contentViewControllerBeingRemoved;
    bool  _initialOrientationHasBeenApplied;
    <SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> * _orientationDelegate;
    bool  _rendersWhileLocked;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    long long  _sceneInterfaceOrientationMode;
    TRAOrientationResolutionPolicyInfo * _traitsOrientationResolutionPolicy;
    TRAParticipant * _traitsParticipant;
    <BSInvalidatable> * _traitsResolutionPolicySpecifier;
    SBWindowScene * _windowScene;
}

@property (nonatomic, readonly) long long currentInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> *orientationDelegate;
@property (nonatomic, readonly) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForOverlayRootView;
- (bool)_canShowWhileLocked;
- (void)_containerViewDidSetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_containerViewDidSetCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_containerViewDidSetHostOrientation:(long long)arg1;
- (long long)_hostOrientation;
- (bool)_isSceneStatusBarHidden;
- (void)_updateOrientationResolutionPolicyWithContainerTraitsParticipant:(id)arg1;
- (void)appendDescriptionForParticipant:(id)arg1 withBuilder:(id)arg2 multilinePrefix:(id)arg3;
- (void)containerDidUpdateTraitsParticipant:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (void)didChangeSettingsForParticipant:(id)arg1 context:(id)arg2;
- (id)initWithContentViewController:(id)arg1 sceneHandle:(id)arg2 windowScene:(id)arg3 orientationDelegate:(id)arg4 rendersWhileLocked:(bool)arg5;
- (void)loadView;
- (id)orientationDelegate;
- (id)overlayView;
- (id)participantAssociatedWindows:(id)arg1;
- (void)setOrientationDelegate:(id)arg1;
- (void)updatePreferencesForParticipant:(id)arg1 updater:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface SBAppContainerViewController : SBLayoutElementViewController <SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneViewControlling, SBApplicationSceneViewControllingStatusBarDelegate, SBDeviceApplicationSceneStatusBarStateObserver, SBSceneHandleObserver> {
    SBApplicationSceneHandle * _applicationSceneHandle;
    UIViewController<SBApplicationSceneViewControlling> * _applicationSceneViewController;
    long long  _requestedDisplayMode;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsDiffInspector;
    <SBDeviceApplicationSceneStatusBarStateObserver> * _statusBarDelegate;
    _SBAppContainerStatusBarStateProxy * _statusBarObserverProxy;
}

@property (nonatomic, readonly) UIViewController<SBApplicationSceneViewControlling> *_applicationSceneViewController;
@property (nonatomic) <SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (nonatomic, readonly) long long containerOrientation;
@property (nonatomic, readonly) long long contentOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentReferenceSize;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (nonatomic, retain) <SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic) <SBDeviceApplicationSceneStatusBarStateObserver> *statusBarDelegate;
@property (nonatomic, readonly) <SBApplicationSceneStatusBarDescribing> *statusBarDescriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
- (id)_applicationSceneViewController;
- (id)_applicationSceneViewControllerForSceneHandle:(id)arg1;
- (void)_clearState;
- (void)_configureViewController:(id)arg1;
- (id)_deviceApplicationSceneHandle;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (void)_updateDisplayLayoutElementForSceneExistence:(id)arg1;
- (id)applicationSceneStatusBarDelegate;
- (void)applicationSceneViewController:(id)arg1 didUpdateStatusBarSettings:(id)arg2;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (long long)containerOrientation;
- (long long)contentOrientation;
- (struct CGSize { double x1; double x2; })contentReferenceSize;
- (id)customContentView;
- (void)didEndTransitionToVisible:(bool)arg1;
- (long long)displayMode;
- (id)initWithDisplayIdentity:(id)arg1;
- (void)invalidate;
- (id)newSnapshot;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)overrideStatusBarStyle;
- (id)placeholderContentContext;
- (void)prepareForReuse;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)setApplicationSceneStatusBarDelegate:(id)arg1;
- (void)setContentReferenceSize:(struct CGSize { double x1; double x2; })arg1 withContentOrientation:(long long)arg2 andContainerOrientation:(long long)arg3;
- (void)setContentWrapperInterfaceOrientation:(long long)arg1;
- (void)setCustomContentView:(id)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)setPlaceholderContentContext:(id)arg1;
- (void)setStatusBarDelegate:(id)arg1;
- (double)statusBarAlpha;
- (id)statusBarDelegate;
- (id)statusBarDescriber;

@end

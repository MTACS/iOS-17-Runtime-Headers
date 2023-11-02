
@interface SBLoginAppSceneHoster : NSObject <FBSceneObserver, SBLoginAppSceneHoster> {
    SBSUILoginUISceneClientSettingsDiffInspector * _appClientSettingsDiffInspector;
    bool  _deferHIDEvents;
    <SBLoginAppSceneHosterDelegate> * _delegate;
    bool  _hidEventDeferralsInstalled;
    <BSInvalidatable> * _keyboardFocusRedirectAssertion;
    FBScene * _scene;
    FBApplicationUpdateScenesTransaction * _sceneCreateTransaction;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    <UIScenePresenter> * _scenePresenter;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferHIDEvents;
@property (nonatomic) <SBLoginAppSceneHosterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBApplication *hostedApp;
@property (nonatomic, readonly) NSString *hostedAppBundleID;
@property (nonatomic, readonly) NSString *hostedSceneIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appClientSettingsDiffInspector;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)contentView;
- (bool)deferHIDEvents;
- (id)delegate;
- (id)hostedApp;
- (id)hostedAppBundleID;
- (id)hostedSceneIdentifier;
- (id)init;
- (void)killLoginApp;
- (void)launchLoginAppWithInitialOrientation:(long long)arg1 completion:(id /* block */)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (void)setDeferHIDEvents:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateSettingsWithTransitionBlock:(id /* block */)arg1;

@end

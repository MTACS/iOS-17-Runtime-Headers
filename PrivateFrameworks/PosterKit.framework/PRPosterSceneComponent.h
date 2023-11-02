
@interface PRPosterSceneComponent : NSObject <FBSceneObserver> {
    NSString * _bundleIdentifier;
    <BSTimerScheduleQuerying><BSInvalidatable> * _eventTimer;
    CLInUseAssertion * _locationInUseAssertion;
    RBSAssertion * _mlmAssertion;
    unsigned long long  _options;
    RBSProcessIdentity * _processIdentity;
    FBScene * _scene;
    RBSAssertion * _taskAssertion;
    BSAbsoluteMachTimer * _wakeTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_main_remoteMLMInvalidation:(id)arg1;
- (void)_main_updateState;
- (id)initWithScene:(id)arg1 bundleIdentifier:(id)arg2 processIdentity:(id)arg3 options:(unsigned long long)arg4;
- (void)invalidate;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;

@end

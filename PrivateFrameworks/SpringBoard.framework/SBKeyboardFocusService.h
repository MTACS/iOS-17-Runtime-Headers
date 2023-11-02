
@interface SBKeyboardFocusService : NSObject <_SBKeyboardServiceConnectionListenerDelegate> {
    NSHashTable * _focusRequestedScenes;
    SBWorkspaceKeyboardFocusController * _keyboardFocusController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_additionalDeferringRulesByClient;
    NSMapTable * _lock_externalSceneIdentitiesByClient;
    <_SBSceneResolving> * _sceneResolver;
    <_SBKeyboardServiceConnectionListening> * _serviceConnectionListener;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_updateExternalSceneIdentities;
- (void)client:(id)arg1 deferAdditionalEnvironments:(id)arg2 whenSceneHasKeyboardFocus:(id)arg3 pid:(id)arg4;
- (void)client:(id)arg1 removeKeyboardFocusFromSceneIdentity:(id)arg2 pid:(id)arg3;
- (void)client:(id)arg1 requestKeyboardFocusForSceneIdentity:(id)arg2 pid:(id)arg3 completion:(id /* block */)arg4;
- (void)client:(id)arg1 setExternalSceneIdentities:(id)arg2;
- (void)client:(id)arg1 stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(id)arg2 pid:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (id)initWithKeyboardFocusController:(id)arg1 sceneResolver:(id)arg2 serviceListenerFactory:(id)arg3;
- (id)initWithKeyboardFocusController:(id)arg1 systemUIScenesCoordinator:(id)arg2;

@end

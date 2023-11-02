
@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver> {
    NSMapTable * _mapEnvironmentToKeyboardForwardingStateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isRootSystemShellProcess;
+ (id)new;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_newStateMachineWithPresentationEnvironment:(id)arg1;
- (id)_stateMachineForPresentationEnvironment:(id)arg1;
- (void)_updateKeyboardLayersForPresentationEnvironment:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)presentationEnvironmentDidInvalidate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)trackPresentationEnvironment:(id)arg1;

@end

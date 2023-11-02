
@interface _UIEventDeferringBehavior_SystemShell : _UIEventDeferringBehavior_Default <BSDebugDescriptionProviding> {
    struct { 
        unsigned int hasSystemShellBehaviorDelegate : 1; 
        unsigned int delegateWantsLocalCompatibilityRules : 1; 
        unsigned int delegateShouldSuppressRemoteRule : 1; 
        unsigned int delegateCompareRemoteRules : 1; 
    }  _behaviorDelegateFlags;
    <_UIEventDeferringSystemShellBehaviorDelegate> * _systemShellBehaviorDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compareRemoteRuleOwningElement:(id)arg1 toElement:(id)arg2 inEnvironment:(id)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithEventDeferringManager:(id)arg1;
- (void)setSystemShellBehaviorDelegate:(id)arg1;
- (bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (bool)shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2;
- (id)systemShellBehaviorDelegate;
- (bool)wantsLocalCompatibilityRules;

@end

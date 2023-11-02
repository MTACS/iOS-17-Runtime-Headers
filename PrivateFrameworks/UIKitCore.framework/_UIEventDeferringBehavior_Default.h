
@interface _UIEventDeferringBehavior_Default : NSObject <_UIEventDeferringBehaviorInternal> {
    struct { 
        unsigned int systemShellManagesKeyboardFocus : 1; 
    }  _behaviorFlags;
    _UIEventDeferringManager * _eventDeferringManager;
    <_UIEventDeferringSystemShellBehaviorDelegate> * _systemShellBehaviorDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIEventDeferringManager *eventDeferringManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <_UIEventDeferringSystemShellBehaviorDelegate> *systemShellBehaviorDelegate;
@property (nonatomic) bool systemShellManagesKeyboardFocus;

- (void).cxx_destruct;
- (long long)compareRemoteRuleOwningElement:(id)arg1 toElement:(id)arg2 inEnvironment:(id)arg3;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)eligibleForLocalCompatibilityRuleRemoval;
- (id)eventDeferringManager;
- (id)init;
- (id)initWithEventDeferringManager:(id)arg1;
- (void)setSystemShellBehaviorDelegate:(id)arg1;
- (void)setSystemShellManagesKeyboardFocus:(bool)arg1;
- (bool)shouldAllowFallbackWindowForEnvironment:(id)arg1;
- (bool)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;
- (bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;
- (bool)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;
- (bool)shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)systemShellBehaviorDelegate;
- (bool)systemShellManagesKeyboardFocus;
- (bool)wantsLocalCompatibilityRules;
- (bool)wantsLocalIdealRules;
- (bool)wantsSystemKeyCommandOverlayRules;

@end

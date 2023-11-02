
@protocol _UIEventDeferringBehaviorInternal <_UIEventDeferringBehavior, BSDebugDescriptionProviding>

@required

+ (id)new;

- (long long)compareRemoteRuleOwningElement:(id <_UIEventDeferringRuleOwning>)arg1 toElement:(id <_UIEventDeferringRuleOwning>)arg2 inEnvironment:(BKSHIDEventDeferringEnvironment *)arg3;
- (bool)eligibleForLocalCompatibilityRuleRemoval;
- (id)init;
- (id)initWithEventDeferringManager:(_UIEventDeferringManager *)arg1;
- (void)setSystemShellBehaviorDelegate:(id <_UIEventDeferringSystemShellBehaviorDelegate>)arg1;
- (void)setSystemShellManagesKeyboardFocus:(bool)arg1;
- (bool)shouldAllowFallbackWindowForEnvironment:(BKSHIDEventDeferringEnvironment *)arg1;
- (bool)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;
- (bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;
- (bool)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;
- (bool)shouldSuppressRemoteRuleForOwningElement:(id <_UIEventDeferringRuleOwning>)arg1 inEnvironment:(BKSHIDEventDeferringEnvironment *)arg2;
- (<_UIEventDeferringSystemShellBehaviorDelegate> *)systemShellBehaviorDelegate;
- (bool)systemShellManagesKeyboardFocus;
- (bool)wantsLocalCompatibilityRules;
- (bool)wantsLocalIdealRules;
- (bool)wantsSystemKeyCommandOverlayRules;

@end

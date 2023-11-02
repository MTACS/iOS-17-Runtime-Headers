
@protocol _UIEventDeferringSystemShellBehaviorDelegate <NSObject>

@optional

- (long long)eventDeferringManagerSystemShellBehavior:(id <_UIEventDeferringBehavior>)arg1 compareRemoteRuleOwningElement:(id <_UIEventDeferringRuleOwning>)arg2 toElement:(id <_UIEventDeferringRuleOwning>)arg3 inEnvironment:(BKSHIDEventDeferringEnvironment *)arg4;
- (bool)eventDeferringManagerSystemShellBehavior:(id <_UIEventDeferringBehavior>)arg1 shouldSuppressRemoteRuleForOwningElement:(id <_UIEventDeferringRuleOwning>)arg2 inEnvironment:(BKSHIDEventDeferringEnvironment *)arg3;
- (bool)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;

@end

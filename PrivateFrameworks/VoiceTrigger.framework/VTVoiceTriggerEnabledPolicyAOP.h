
@interface VTVoiceTriggerEnabledPolicyAOP : VTPolicy

- (void)_addVoiceTriggerEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

@end

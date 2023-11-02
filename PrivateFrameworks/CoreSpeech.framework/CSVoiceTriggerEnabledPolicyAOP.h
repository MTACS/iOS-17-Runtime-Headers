
@interface CSVoiceTriggerEnabledPolicyAOP : CSPolicy

- (void)_addVoiceTriggerEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

@end


@protocol HMTriggerBuilderPrivate <HMTriggerBuilder>

@required

- (bool)nameIsConfigured;
- (HMTriggerPolicy *)policy;
- (void)setName:(NSString *)arg1 isConfigured:(bool)arg2;
- (void)setPolicy:(HMTriggerPolicy *)arg1;
- (HMActionSetBuilder *)triggerOwnedActionSet;

@end

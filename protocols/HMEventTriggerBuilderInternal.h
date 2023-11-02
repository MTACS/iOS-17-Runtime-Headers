
@protocol HMEventTriggerBuilderInternal <HMEventTriggerBuilderPrivate, HMTriggerBuilderInternal, HMEventTriggerConfiguration>

@required

- (HMEventTriggerBuilder *)copyAsBuilder;
- (id)initWithEventTrigger:(HMEventTrigger *)arg1;

@end

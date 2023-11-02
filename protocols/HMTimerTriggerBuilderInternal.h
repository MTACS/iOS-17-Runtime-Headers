
@protocol HMTimerTriggerBuilderInternal <HMTimerTriggerBuilderPrivate, HMTriggerBuilderInternal, HMTimerTriggerConfiguration>

@required

- (NSDate *)fireDateIfSet;

@end

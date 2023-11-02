
@protocol HFConcreteTimeTriggerBuilderLikeObject <NSObject>

@required

- (void)copyCurrentStateFromTriggerBuilder:(id <HFConcreteTimeTriggerBuilderLikeObject>)arg1;
- (HFEventBuilder<HFTimeEventBuilder> *)eventBuilder;
- (NSString *)name;
- (NSArray *)recurrences;
- (void)setEventBuilder:(HFEventBuilder<HFTimeEventBuilder> *)arg1;
- (void)setRecurrences:(NSArray *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (NSTimeZone *)timeZone;
- (void)triggerEnabledStateDidChange:(bool)arg1;

@end

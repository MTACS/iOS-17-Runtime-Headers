
@interface HFEventTriggerBuilderTimeInterface : HFEventTriggerBuilderInterface <HFConcreteTimeTriggerBuilderLikeObject> {
    HFEventBuilder<HFTimeEventBuilder> * _eventBuilder;
    NSArray * _recurrences;
    NSTimeZone * timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSArray *recurrences;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)copyCurrentStateFromTriggerBuilder:(id)arg1;
- (id)eventBuilder;
- (id)name;
- (id)recurrences;
- (void)setEventBuilder:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)triggerEnabledStateDidChange:(bool)arg1;

@end

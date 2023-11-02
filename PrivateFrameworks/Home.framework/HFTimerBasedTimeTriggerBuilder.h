
@interface HFTimerBasedTimeTriggerBuilder : HFTriggerBuilder <HFConcreteTimeTriggerBuilderLikeObject> {
    HFEventBuilder<HFTimeEventBuilder> * eventBuilder;
    NSArray * recurrences;
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
- (void)_setupWithExistingTrigger:(id)arg1;
- (id)_updateRecurrences;
- (id)_updateTimeZone;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (void)copyCurrentStateFromTriggerBuilder:(id)arg1;
- (id)createNewTriggerBuilder;
- (id)eventBuilder;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)recurrences;
- (void)setEventBuilder:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)triggerEnabledStateDidChange:(bool)arg1;
- (id)updateTriggerBuilder:(id)arg1;

@end

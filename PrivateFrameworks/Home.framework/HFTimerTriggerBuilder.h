
@interface HFTimerTriggerBuilder : HFTriggerBuilder {
    HFTriggerBuilder * _concreteTriggerBuilder;
    unsigned long long  _preferredHomeKitObjectType;
    <HFConcreteTimeTriggerBuilderLikeObject> * _timeInterface;
}

@property (nonatomic, retain) HFTriggerBuilder *concreteTriggerBuilder;
@property (nonatomic, retain) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (nonatomic) unsigned long long preferredHomeKitObjectType;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, retain) <HFConcreteTimeTriggerBuilderLikeObject> *timeInterface;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_commitUsingBuilders;
- (void)_createConcreteTriggerBuilder;
- (bool)_currentStateRequiresEventBasedTimeTriggers;
- (id)_lazy_performValidation;
- (bool)_supportsEventBasedTimeTriggers;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)compareToObject:(id)arg1;
- (id)concreteTriggerBuilder;
- (id)convertedEventTriggerBuilder;
- (id)eventBuilder;
- (id)getOrCreateTriggerBuilder;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)lazilyFinishCommitingTrigger;
- (id)naturalLanguageDetailsWithOptions:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (unsigned long long)preferredHomeKitObjectType;
- (id)recurrences;
- (void)setConcreteTriggerBuilder:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEventBuilder:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreferredHomeKitObjectType:(unsigned long long)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setTimeInterface:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (bool)supportsHomeKitAutomationBuilders;
- (id)timeInterface;
- (id)timeZone;
- (id)updateTriggerBuilder:(id)arg1;
- (id)validationError;
- (bool)wantsConvertToEventTrigger;

@end

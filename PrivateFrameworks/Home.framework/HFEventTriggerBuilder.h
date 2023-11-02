
@interface HFEventTriggerBuilder : HFTriggerBuilder {
    NSSet * _eventTypes;
    bool  _executeOnce;
    NSMutableDictionary * _extensionInterfaces;
    NSMutableSet * _mutableEventBuilders;
    NSArray * _recurrences;
    bool  _shouldMarkTriggerAsHomeAppCreated;
}

@property (nonatomic, readonly) bool _effectiveExecuteOnce;
@property (nonatomic, readonly) HFCharacteristicTriggerBuilderInterface *characteristicInterface;
@property (nonatomic, readonly) NSSet *characteristics;
@property (nonatomic, readonly) NSArray *eventBuilders;
@property (nonatomic, readonly) NSSet *eventTypes;
@property (nonatomic) bool executeOnce;
@property (nonatomic, retain) NSMutableDictionary *extensionInterfaces;
@property (nonatomic, readonly) HFEventBuilderLocationInterface *locationInterface;
@property (nonatomic, retain) NSMutableSet *mutableEventBuilders;
@property (nonatomic, retain) NSArray *recurrences;
@property (nonatomic) bool shouldMarkTriggerAsHomeAppCreated;
@property (nonatomic, readonly) HFEventTriggerBuilderTimeInterface *timeInterface;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_allActionSets;
- (void)_createEventBuilders;
- (bool)_effectiveExecuteOnce;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_lazy_performValidation;
- (id)_updateEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (void)addEventBuilder:(id)arg1;
- (void)applyEventBuilderDiff:(id)arg1;
- (id)characteristicInterface;
- (id)characteristics;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)compareToObject:(id)arg1;
- (id)createEndEvents;
- (id)createEvents;
- (id)createNewTriggerBuilder;
- (id)deleteTrigger;
- (id)eventBuilders;
- (id)eventTypes;
- (bool)executeOnce;
- (id)extensionInterfaces;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)lazilyFinishCommitingTrigger;
- (id)locationInterface;
- (id)mutableEventBuilders;
- (id)naturalLanguageDetailsWithOptions:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (id)recurrences;
- (void)removeEventBuilder:(id)arg1;
- (void)removeServiceLikeItem:(id)arg1;
- (bool)requiresConfirmationToRun;
- (void)setExecuteOnce:(bool)arg1;
- (void)setExtensionInterfaces:(id)arg1;
- (void)setMutableEventBuilders:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setShouldMarkTriggerAsHomeAppCreated:(bool)arg1;
- (bool)shouldMarkTriggerAsHomeAppCreated;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (id)timeInterface;
- (id)updateTriggerBuilder:(id)arg1;
- (id)validationError;

@end

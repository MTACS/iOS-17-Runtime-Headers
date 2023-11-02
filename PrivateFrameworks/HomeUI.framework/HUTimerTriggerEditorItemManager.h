
@interface HUTimerTriggerEditorItemManager : HFItemManager {
    HUTriggerConditionEditorItemModule * _conditionModule;
    HFStaticItem * _datePickerItem;
    bool  _datePickerShown;
    NSDateComponents * _defaultFireTimeComponents;
    HUInstructionsItem * _instructionsItem;
    HUInstructionsItem * _recurrencesInstructionsItem;
    HFStaticItem * _recurrencesItem;
    NSMutableDictionary * _significantEventToDefaultOffsetMap;
    HFStaticItem * _sunriseOptionItem;
    HFStaticItem * _sunsetOptionItem;
    HFStaticItem * _timeOptionItem;
    HFTimerTriggerBuilder * _timerTriggerBuilder;
}

@property (nonatomic, retain) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, readonly) NSSet *dateOptionsItems;
@property (nonatomic, retain) HFStaticItem *datePickerItem;
@property (nonatomic) bool datePickerShown;
@property (nonatomic, retain) NSDateComponents *defaultFireTimeComponents;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;
@property (nonatomic, retain) HUInstructionsItem *recurrencesInstructionsItem;
@property (nonatomic, retain) HFStaticItem *recurrencesItem;
@property (nonatomic, readonly) NSMutableDictionary *significantEventToDefaultOffsetMap;
@property (nonatomic, retain) HFStaticItem *sunriseOptionItem;
@property (nonatomic, retain) HFStaticItem *sunsetOptionItem;
@property (nonatomic, retain) HFStaticItem *timeOptionItem;
@property (nonatomic, readonly) HFTimerTriggerBuilder *timerTriggerBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)conditionModule;
- (id)dateOptionsItems;
- (id)datePickerItem;
- (bool)datePickerShown;
- (id)defaultFireTimeComponents;
- (id)defaultOffsetForSignificantEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithTimerTriggerBuilder:(id)arg1 delegate:(id)arg2;
- (id)instructionsItem;
- (id)recurrencesInstructionsItem;
- (id)recurrencesItem;
- (void)setConditionModule:(id)arg1;
- (void)setDatePickerItem:(id)arg1;
- (void)setDatePickerShown:(bool)arg1;
- (void)setDefaultFireTimeComponents:(id)arg1;
- (void)setDefaultOffset:(id)arg1 forSignificantEvent:(id)arg2;
- (void)setInstructionsItem:(id)arg1;
- (void)setRecurrencesInstructionsItem:(id)arg1;
- (void)setRecurrencesItem:(id)arg1;
- (void)setSunriseOptionItem:(id)arg1;
- (void)setSunsetOptionItem:(id)arg1;
- (void)setTimeOptionItem:(id)arg1;
- (id)significantEventToDefaultOffsetMap;
- (id)sunriseOptionItem;
- (id)sunsetOptionItem;
- (id)timeOptionItem;
- (id)timerTriggerBuilder;
- (void)updateForSignificantEventOffsetChange;

@end

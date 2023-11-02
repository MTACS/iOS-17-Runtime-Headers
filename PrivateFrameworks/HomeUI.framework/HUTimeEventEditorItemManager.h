
@interface HUTimeEventEditorItemManager : HFItemManager {
    HFStaticItem * _datePickerItem;
    bool  _datePickerShown;
    NSDateComponents * _defaultFireTimeComponents;
    HUInstructionsItem * _instructionsItem;
    HUInstructionsItem * _recurrencesInstructionsItem;
    HFStaticItem * _recurrencesItem;
    NSMutableDictionary * _significantEventToDefaultOffsetMap;
    HFStaticItem * _sunriseOptionItem;
    HFStaticItem * _sunsetOptionItem;
    HFEventBuilder<HFTimeEventBuilder> * _timeEvent;
    HFStaticItem * _timeOptionItem;
    HFEventTriggerBuilder * _triggerBuilder;
}

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
@property (nonatomic, readonly) HFEventBuilder<HFTimeEventBuilder> *timeEvent;
@property (nonatomic, retain) HFStaticItem *timeOptionItem;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)dateOptionsItems;
- (id)datePickerItem;
- (bool)datePickerShown;
- (id)defaultFireTimeComponents;
- (id)defaultOffsetForSignificantEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithTimeEvent:(id)arg1 triggerBuilder:(id)arg2 delegate:(id)arg3;
- (id)instructionsItem;
- (id)recurrencesInstructionsItem;
- (id)recurrencesItem;
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
- (id)timeEvent;
- (id)timeOptionItem;
- (id)triggerBuilder;
- (void)updateForSignificantEventOffsetChange;

@end

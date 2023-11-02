
@interface HUTriggerTypePickerItemManager : HFItemManager {
    HFStaticItem * _alarmTriggerItem;
    HFStaticItem * _arrivingAtLocationTriggerItem;
    HFStaticItem * _characteristicTriggerItem;
    HFStaticItem * _customAutomationItem;
    HUInstructionsItem * _eventsInstructionsItem;
    HFStaticItem * _leavingLocationTriggerItem;
    bool  _showSuggestedAutomations;
    HFItemModule * _suggestedAutomationsModule;
    HUInstructionsItem * _suggestionsInstructionsItem;
    HFStaticItem * _timerTriggerItem;
}

@property (nonatomic, retain) HFStaticItem *alarmTriggerItem;
@property (nonatomic, retain) HFStaticItem *arrivingAtLocationTriggerItem;
@property (nonatomic, retain) HFStaticItem *characteristicTriggerItem;
@property (nonatomic, retain) HFStaticItem *customAutomationItem;
@property (nonatomic, retain) HUInstructionsItem *eventsInstructionsItem;
@property (nonatomic, retain) HFStaticItem *leavingLocationTriggerItem;
@property (nonatomic) bool showSuggestedAutomations;
@property (nonatomic, retain) HFItemModule *suggestedAutomationsModule;
@property (nonatomic, retain) HUInstructionsItem *suggestionsInstructionsItem;
@property (nonatomic, retain) HFStaticItem *timerTriggerItem;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_createCharacteristicItemForSource:(unsigned long long)arg1;
- (id)_createCustomItem;
- (id)_createLocationItemForType:(unsigned long long)arg1;
- (id)_createTimeItem;
- (bool)_hasMinimumRequiredTriggerableServices:(unsigned long long)arg1;
- (bool)_hasMinimumRequiredTriggeringServices:(long long)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)alarmTriggerItem;
- (id)arrivingAtLocationTriggerItem;
- (id)characteristicTriggerItem;
- (id)customAutomationItem;
- (id)eventsInstructionsItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)leavingLocationTriggerItem;
- (void)setAlarmTriggerItem:(id)arg1;
- (void)setArrivingAtLocationTriggerItem:(id)arg1;
- (void)setCharacteristicTriggerItem:(id)arg1;
- (void)setCustomAutomationItem:(id)arg1;
- (void)setEventsInstructionsItem:(id)arg1;
- (void)setLeavingLocationTriggerItem:(id)arg1;
- (void)setShowSuggestedAutomations:(bool)arg1;
- (void)setSuggestedAutomationsModule:(id)arg1;
- (void)setSuggestionsInstructionsItem:(id)arg1;
- (void)setTimerTriggerItem:(id)arg1;
- (bool)showSuggestedAutomations;
- (id)suggestedAutomationsModule;
- (id)suggestionsInstructionsItem;
- (id)timerTriggerItem;

@end

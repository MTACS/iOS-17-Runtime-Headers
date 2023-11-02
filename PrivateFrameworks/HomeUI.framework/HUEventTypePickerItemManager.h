
@interface HUEventTypePickerItemManager : HFItemManager {
    HFStaticItem * _alarmEventItem;
    HFStaticItem * _arrivingAtLocationEventItem;
    HFStaticItem * _characteristicEventItem;
    HFItem * _instructionsItem;
    HFStaticItem * _leavingLocationEventItem;
    HFStaticItem * _timerEventItem;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, retain) HFStaticItem *alarmEventItem;
@property (nonatomic, retain) HFStaticItem *arrivingAtLocationEventItem;
@property (nonatomic, retain) HFStaticItem *characteristicEventItem;
@property (nonatomic, retain) HFItem *instructionsItem;
@property (nonatomic, retain) HFStaticItem *leavingLocationEventItem;
@property (nonatomic, retain) HFStaticItem *timerEventItem;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_createCharacteristicItemForSource:(unsigned long long)arg1;
- (id)_createLocationItemForType:(unsigned long long)arg1;
- (id)_createTimeItem;
- (bool)_hasMinimumRequiredTriggerableServices:(unsigned long long)arg1;
- (bool)_hasMinimumRequiredTriggeringServices:(long long)arg1;
- (id)alarmEventItem;
- (id)arrivingAtLocationEventItem;
- (id)characteristicEventItem;
- (id)initWithTriggerBuilder:(id)arg1 delegate:(id)arg2;
- (id)instructionsItem;
- (id)leavingLocationEventItem;
- (void)setAlarmEventItem:(id)arg1;
- (void)setArrivingAtLocationEventItem:(id)arg1;
- (void)setCharacteristicEventItem:(id)arg1;
- (void)setInstructionsItem:(id)arg1;
- (void)setLeavingLocationEventItem:(id)arg1;
- (void)setTimerEventItem:(id)arg1;
- (id)timerEventItem;
- (id)triggerBuilder;

@end

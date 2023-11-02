
@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager {
    HFItem * _endConditionPickerItem;
    HFTimeRangeCondition * _rangeCondition;
    HFItem * _startConditionPickerItem;
}

@property (nonatomic, retain) HFItem *endConditionPickerItem;
@property (nonatomic, retain) HFTimeRangeCondition *rangeCondition;
@property (nonatomic, retain) HFItem *startConditionPickerItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)endConditionPickerItem;
- (id)initWithDelegate:(id)arg1 rangeCondition:(id)arg2;
- (id)primitiveConditionForPickerItem:(id)arg1;
- (id)rangeCondition;
- (void)setEndConditionPickerItem:(id)arg1;
- (void)setPrimitiveCondition:(id)arg1 forPickerItem:(id)arg2;
- (void)setRangeCondition:(id)arg1;
- (void)setStartConditionPickerItem:(id)arg1;
- (id)startConditionPickerItem;

@end

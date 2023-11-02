
@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule {
    HFItem * _anyTimeOptionItem;
    HFTransformItem * _customOptionItem;
    HFTransformItem * _onlyDayOptionItem;
    HFTransformItem * _onlyNightOptionItem;
    HFTransformItem * _specificTimesOptionItem;
}

@property (nonatomic, retain) HFItem *anyTimeOptionItem;
@property (nonatomic, retain) HFTransformItem *customOptionItem;
@property (nonatomic, retain) HFTransformItem *onlyDayOptionItem;
@property (nonatomic, retain) HFTransformItem *onlyNightOptionItem;
@property (nonatomic, readonly) NSArray *optionItems;
@property (nonatomic, retain) HFTransformItem *specificTimesOptionItem;

- (void).cxx_destruct;
- (id)_conditionItemForType:(unsigned long long)arg1;
- (id)_createConditionItemForType:(unsigned long long)arg1;
- (id)anyTimeOptionItem;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (bool)conditionIsDisabled;
- (id)conditionTitle;
- (id)customOptionItem;
- (bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)noConditionSummaryTitle;
- (id)onlyDayOptionItem;
- (id)onlyNightOptionItem;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (void)setAnyTimeOptionItem:(id)arg1;
- (void)setCustomOptionItem:(id)arg1;
- (void)setOnlyDayOptionItem:(id)arg1;
- (void)setOnlyNightOptionItem:(id)arg1;
- (void)setSpecificTimesOptionItem:(id)arg1;
- (id)specificTimesOptionItem;

@end

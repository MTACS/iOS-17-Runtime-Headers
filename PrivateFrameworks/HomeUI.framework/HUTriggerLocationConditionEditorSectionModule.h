
@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule <HFLocationManagerObserver> {
    HFItem * _anyLocationOptionItem;
    HFTransformItem * _anyUserAtHomeOptionItem;
    HFTransformItem * _currentUserAtHomeOptionItem;
    HFTransformItem * _currentUserNotAtHomeOptionItem;
    HFTransformItem * _customOptionItem;
    HFTransformItem * _noUserAtHomeOptionItem;
}

@property (nonatomic, retain) HFItem *anyLocationOptionItem;
@property (nonatomic, retain) HFTransformItem *anyUserAtHomeOptionItem;
@property (nonatomic, retain) HFTransformItem *currentUserAtHomeOptionItem;
@property (nonatomic, retain) HFTransformItem *currentUserNotAtHomeOptionItem;
@property (nonatomic, retain) HFTransformItem *customOptionItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFTransformItem *noUserAtHomeOptionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_conditionItemForPresenceEvent:(id)arg1;
- (id)_createConditionItemForPresenceEventType:(unsigned long long)arg1 userType:(unsigned long long)arg2;
- (id)anyLocationOptionItem;
- (id)anyUserAtHomeOptionItem;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)arg1;
- (bool)conditionIsDisabled;
- (id)conditionTitle;
- (id)currentUserAtHomeOptionItem;
- (id)currentUserNotAtHomeOptionItem;
- (id)customOptionItem;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)noConditionSummaryTitle;
- (id)noUserAtHomeOptionItem;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (void)setAnyLocationOptionItem:(id)arg1;
- (void)setAnyUserAtHomeOptionItem:(id)arg1;
- (void)setCurrentUserAtHomeOptionItem:(id)arg1;
- (void)setCurrentUserNotAtHomeOptionItem:(id)arg1;
- (void)setCustomOptionItem:(id)arg1;
- (void)setNoUserAtHomeOptionItem:(id)arg1;

@end

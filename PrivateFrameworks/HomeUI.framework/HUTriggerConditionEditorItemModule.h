
@interface HUTriggerConditionEditorItemModule : HFItemModule {
    HFConditionCollection * _conditionCollection;
    HUTriggerCustomConditionEditorSectionModule * _customConditionsModule;
    NSSet * _disallowedConditionTypes;
    HMHome * _home;
    NSSet * _itemProviders;
    HUTriggerConditionEditorExpandingSectionModule * _locationConditionModule;
    HUTriggerConditionEditorExpandingSectionModule * _timeConditionModule;
}

@property (nonatomic, readonly) HFConditionCollection *conditionCollection;
@property (nonatomic, retain) HUTriggerCustomConditionEditorSectionModule *customConditionsModule;
@property (nonatomic, readonly) NSSet *disallowedConditionTypes;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSSet *itemProviders;
@property (nonatomic, retain) HUTriggerConditionEditorExpandingSectionModule *locationConditionModule;
@property (nonatomic, retain) HUTriggerConditionEditorExpandingSectionModule *timeConditionModule;

- (void).cxx_destruct;
- (id)_allSectionModules;
- (void)_buildItemProviders;
- (id)_expandingSectionModuleForConditionType:(unsigned long long)arg1;
- (id)_expandingSectionModules;
- (bool)_isConditionOptionItem:(id)arg1 ofType:(unsigned long long)arg2;
- (id)_moduleForConditionOptionItem:(id)arg1;
- (void)_reloadConditionForExpandingSectionModule:(id)arg1 remainingConditions:(id)arg2;
- (void)_reloadConditionsFromConditionCollection;
- (id)_sectionModuleForItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)conditionCollection;
- (void)conditionCollectionDidChange;
- (id)conditionForOptionItem:(id)arg1;
- (unsigned long long)conditionTypeForItem:(id)arg1;
- (id)customConditionsModule;
- (id)disallowedConditionTypes;
- (bool)doesConditionOptionItemRequireInitialConfiguration:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 conditionCollection:(id)arg3 disallowedConditionTypes:(id)arg4;
- (bool)isConditionOptionItem:(id)arg1;
- (bool)isCustomConditionSwitchItem:(id)arg1;
- (bool)isShowConditionOptionsItem:(id)arg1;
- (id)itemProviders;
- (id)locationConditionModule;
- (void)setCustomConditionEnabled:(bool)arg1 forItem:(id)arg2;
- (void)setCustomConditionsModule:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setLocationConditionModule:(id)arg1;
- (void)setSelectedConditionOptionItem:(id)arg1 forType:(unsigned long long)arg2;
- (void)setShowConditionOptions:(bool)arg1 forType:(unsigned long long)arg2;
- (void)setTimeConditionModule:(id)arg1;
- (bool)shouldShowConditionOptionsForType:(unsigned long long)arg1;
- (id)timeConditionModule;
- (void)updateCondition:(id)arg1 forOptionItem:(id)arg2;

@end

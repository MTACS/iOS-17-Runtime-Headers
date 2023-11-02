
@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule> {
    HMHome * _home;
    HFTransformItemProvider * _itemProvider;
    NSMutableSet * _mutableDisabledConditions;
    NSMutableSet * _mutableEnabledConditions;
    HFConditionItemProvider * _sourceConditionItemProvider;
}

@property (nonatomic, readonly) unsigned long long conditionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disabledConditions;
@property (nonatomic, readonly) NSSet *enabledConditions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFTransformItemProvider *itemProvider;
@property (nonatomic, retain) NSMutableSet *mutableDisabledConditions;
@property (nonatomic, retain) NSMutableSet *mutableEnabledConditions;
@property (nonatomic, readonly) HFConditionItemProvider *sourceConditionItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)conditionForItem:(id)arg1;
- (unsigned long long)conditionType;
- (id)disabledConditions;
- (id)enabledConditions;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (bool)isConditionEnabled:(id)arg1;
- (id)itemForCondition:(id)arg1;
- (id)itemProvider;
- (id)itemProviders;
- (id)mutableDisabledConditions;
- (id)mutableEnabledConditions;
- (void)setConditionEnabled:(bool)arg1 forCondition:(id)arg2;
- (void)setMutableDisabledConditions:(id)arg1;
- (void)setMutableEnabledConditions:(id)arg1;
- (id)sourceConditionItemProvider;
- (void)updateEnabledConditions:(id)arg1 disabledConditions:(id)arg2;

@end

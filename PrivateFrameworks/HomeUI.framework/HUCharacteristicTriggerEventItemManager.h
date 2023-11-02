
@interface HUCharacteristicTriggerEventItemManager : HFItemManager {
    HFItem * _activeOptionItem;
    HUTriggerConditionEditorItemModule * _conditionModule;
    HFCharacteristicEventBuilderItem * _eventBuilderItem;
    HUInstructionsItem * _instructionsItem;
    HUCharacteristicEventOptionProvider * _optionProvider;
    HFItem * _serviceNameItem;
    HFItem<HFServiceVendor> * _serviceVendingItem;
    HFStaticItemProvider * _staticItemProvider;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, retain) HFItem *activeOptionItem;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;
@property (nonatomic, retain) HUCharacteristicEventOptionProvider *optionProvider;
@property (nonatomic, retain) HFItem *serviceNameItem;
@property (nonatomic, retain) HFItem<HFServiceVendor> *serviceVendingItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

+ (id /* block */)_optionItemComparator;
+ (id)_titleForItemSection:(id)arg1;
+ (id)serviceVendorItemForEventBuilderItem:(id)arg1 inHome:(id)arg2;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)activeOptionItem;
- (id)conditionModule;
- (id)eventBuilderItem;
- (id)initWithTriggerBuilder:(id)arg1 eventBuilderItem:(id)arg2 delegate:(id)arg3;
- (id)instructionsItem;
- (id)optionItems;
- (id)optionProvider;
- (id)serviceNameItem;
- (id)serviceVendingItem;
- (void)setActiveOptionItem:(id)arg1;
- (void)setInstructionsItem:(id)arg1;
- (void)setOptionProvider:(id)arg1;
- (void)setServiceNameItem:(id)arg1;
- (void)setServiceVendingItem:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)triggerBuilder;

@end

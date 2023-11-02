
@interface HUCharacteristicEventOptionProvider : HFItemProvider {
    HFCharacteristicEventBuilderItem * _eventBuilderItem;
    id /* block */  _filter;
    HMHome * _home;
    NSMutableSet * _optionItems;
    <HFCharacteristicValueSource> * _overrideValueSource;
    HFItem<HFServiceVendor> * _serviceVendingItem;
}

@property (nonatomic, retain) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *optionItems;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) HFItem<HFServiceVendor> *serviceVendingItem;

+ (id)_characteristicTypesRequiringUpdatedHomeHubs;
+ (id)_supportedCharacteristicTypes;
+ (id)characteristicTypeWithOptionsForServices:(id)arg1;
+ (bool)hasOptionsForAnyServiceInHome:(id)arg1;
+ (bool)hasOptionsForAnyServiceInHome:(id)arg1 allowingSensors:(bool)arg2;
+ (bool)hasOptionsForServiceVendingItem:(id)arg1 outCharacteristicType:(id*)arg2;
+ (bool)hasOptionsForServices:(id)arg1 outCharacteristicType:(id*)arg2;
+ (bool)hasOptionsForServices:(id)arg1 outCharacteristicType:(id*)arg2 allowingSensors:(bool)arg3;
+ (bool)homeHubUpdateRequiredForServices:(id)arg1 forHome:(id)arg2;

- (void).cxx_destruct;
- (id)_notifyingCharacteristicsKeyedByTypeForServices:(id)arg1;
- (id)_optionsForCharacteristicType:(id)arg1 characteristics:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)eventBuilderItem;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithServiceVendingItem:(id)arg1 home:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)optionItems;
- (id)overrideValueSource;
- (id)reloadItems;
- (id)serviceVendingItem;
- (void)setEventBuilderItem:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setOptionItems:(id)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setServiceVendingItem:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end

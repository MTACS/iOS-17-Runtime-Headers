
@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    NSMutableSet * _accessoryInfoDetailItems;
    HFAccessoryInfoItem * _firmwareItem;
    HMHome * _home;
    HFAccessoryNetworkInfoItem * _networkItem;
    HFAccessoryInfoItem * _softwareItem;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) NSMutableSet *accessoryInfoDetailItems;
@property (nonatomic, readonly) HFAccessoryInfoItem *firmwareItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFAccessoryNetworkInfoItem *networkItem;
@property (nonatomic, readonly) HFAccessoryInfoItem *softwareItem;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;
+ (id /* block */)accessoryInfoServiceDetailComparator;
+ (id)preferredCharacteristicOrderArray;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryInfoDetailItems;
- (bool)canToggleAccessoryInfoItem:(id)arg1;
- (id)firmwareItem;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 accessory:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)networkItem;
- (id)reloadItems;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryInfoDetailItems:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)softwareItem;
- (bool)supportsWiFiStrengthDisplay:(id)arg1;
- (void)toggleAccessoryInfoItem:(id)arg1;
- (id)valueSource;

@end

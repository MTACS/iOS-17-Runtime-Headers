
@protocol HAP2AccessoryDelegate <NSObject>

@optional

- (void)accessory:(id <HAP2Accessory>)arg1 didNotifyForUpdatedValuesOnCharacteristic:(HAPCharacteristic *)arg2;
- (void)accessoryDidUpdateConnectionState:(id <HAP2Accessory>)arg1;
- (void)accessoryDidUpdateServices:(id <HAP2Accessory>)arg1;

@end


@protocol HMAccessoryDelegate <NSObject>

@optional

- (void)accessory:(HMAccessory *)arg1 didAddProfile:(HMAccessoryProfile *)arg2;
- (void)accessory:(HMAccessory *)arg1 didRemoveProfile:(HMAccessoryProfile *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateAssociatedServiceTypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareVersion:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 service:(HMService *)arg2 didUpdateValueForCharacteristic:(HMCharacteristic *)arg3;
- (void)accessoryDidUpdateName:(HMAccessory *)arg1;
- (void)accessoryDidUpdateReachability:(HMAccessory *)arg1;
- (void)accessoryDidUpdateServices:(HMAccessory *)arg1;

@end


@protocol HAP2AccessoryPrivate <HAP2Accessory>

@required

- (void)characteristicValueChanged:(HAPCharacteristic *)arg1;
- (NSNumber *)internalSleepIntervalMs;
- (void)setInternalSleepIntervalMs:(NSNumber *)arg1;
- (void)updateConnectionState:(unsigned long long)arg1;
- (bool)updateDiscoveredServices:(NSArray *)arg1;

@end

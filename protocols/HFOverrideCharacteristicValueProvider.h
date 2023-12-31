
@protocol HFOverrideCharacteristicValueProvider <NSObject>

@required

- (id)valueSource:(HFOverrideCharacteristicValueSource *)arg1 overrideValueForCharacteristic:(HMCharacteristic *)arg2;
- (bool)valueSource:(HFOverrideCharacteristicValueSource *)arg1 shouldOverrideValueForCharacteristic:(HMCharacteristic *)arg2;

@end

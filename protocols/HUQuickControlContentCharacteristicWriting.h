
@protocol HUQuickControlContentCharacteristicWriting <NSObject>

@required

- (NSSet *)affectedCharacteristics;
- (<HUQuickControlContentCharacteristicWritingDelegate> *)characteristicWritingDelegate;
- (id)overrideValueForCharacteristic:(HMCharacteristic *)arg1;
- (void)setCharacteristicWritingDelegate:(id <HUQuickControlContentCharacteristicWritingDelegate>)arg1;

@end

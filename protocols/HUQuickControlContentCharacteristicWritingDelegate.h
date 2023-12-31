
@protocol HUQuickControlContentCharacteristicWritingDelegate <NSObject>

@required

- (void)quickControlContent:(id <HUQuickControlContentCharacteristicWriting>)arg1 didEndPossibleWritesForCharacteristics:(NSSet *)arg2;
- (void)quickControlContent:(id <HUQuickControlContentCharacteristicWriting>)arg1 willBeginPossibleWritesForCharacteristics:(NSSet *)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id <HUQuickControlContentCharacteristicWriting>)arg1;

@end

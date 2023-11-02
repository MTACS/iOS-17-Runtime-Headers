
@protocol SBSHardwareButtonEventConsuming <NSObject>

@optional

- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeLongPressForButtonKind:(long long)arg1;
- (void)consumeSinglePressDownForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)consumeStateChange:(long long)arg1 forButtonKind:(long long)arg2;
- (void)consumeTriplePressUpForButtonKind:(long long)arg1;

@end

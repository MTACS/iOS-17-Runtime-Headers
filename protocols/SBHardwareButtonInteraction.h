
@protocol SBHardwareButtonInteraction <NSObject>

@optional

- (bool)consumeDoublePressDown;
- (bool)consumeDoublePressUp;
- (bool)consumeInitialPressDown;
- (bool)consumeInitialPressUp;
- (bool)consumeLongPress;
- (bool)consumeSecondPressDown;
- (bool)consumeSinglePressDown;
- (bool)consumeSinglePressUp;
- (bool)consumeTriplePressUp;
- (bool)disallowsDoublePressForReason:(id*)arg1;
- (bool)disallowsLongPressForReason:(id*)arg1;
- (bool)disallowsSinglePressForReason:(id*)arg1;
- (bool)disallowsTriplePressForReason:(id*)arg1;
- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
- (void)observeSinglePressDidFail;

@end

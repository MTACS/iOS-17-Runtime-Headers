
@protocol CSModalViewDelegate <SBLockScreenModalViewDelegate>

@required

- (void)handlePrimaryActionForView:(id <SBLockScreenModalView>)arg1;
- (void)handleSecondaryActionForView:(id <SBLockScreenModalView>)arg1;
- (bool)isPortrait;

@end

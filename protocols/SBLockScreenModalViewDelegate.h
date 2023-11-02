
@protocol SBLockScreenModalViewDelegate <NSObject>

@required

- (void)handlePrimaryActionForView:(id <SBLockScreenModalView>)arg1;
- (void)handleSecondaryActionForView:(id <SBLockScreenModalView>)arg1;

@end

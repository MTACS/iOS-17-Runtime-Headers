
@protocol PXGFocusableViewDelegate <NSObject>

@optional

- (void)focusableView:(PXGFocusableView *)arg1 didHintFocusMovement:(UIFocusMovementHint *)arg2;
- (void)focusableView:(PXGFocusableView *)arg1 didUpdateFocusInContext:(UIFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (void)focusableViewDidUpdateUserInfo:(PXGFocusableView *)arg1;

@end

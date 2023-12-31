
@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>

@required

- (struct CGPoint { double x1; double x2; })centerForMenuDismissed;
- (struct CGPoint { double x1; double x2; })centerForMenuPresented;
- (struct CGPoint { double x1; double x2; })centerForPlatterWithMenuViewDismissed;
- (struct CGPoint { double x1; double x2; })centerForPlatterWithMenuViewPresented;
- (struct CGPoint { double x1; double x2; })initialCenterForLeadingSwipeActionView;
- (struct CGPoint { double x1; double x2; })initialCenterForTrailingSwipeActionView;
- (UIView *)leadingSwipeActionView;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (void)platterMenuDynamicsController:(_UIPlatterMenuDynamicsController *)arg1 didMoveSwipeView:(UIView *)arg2 toPosition:(struct CGPoint { double x1; double x2; })arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(_UIPlatterMenuDynamicsController *)arg1;
- (UIView *)trailingSwipeActionView;

@optional

- (void)translationDidUpdateForPlatterMenuDynamicsController:(_UIPlatterMenuDynamicsController *)arg1;

@end

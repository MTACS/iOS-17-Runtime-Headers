
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate <NSObject>

@required

- (UIView *)hostViewForResizingKeyplane:(UIKBResizingKeyplaneCoordinator *)arg1;
- (bool)keyplaneSupportsResizingGesture;
- (bool)keyplaneUsesResizingOffset;
- (void)resizeKeyplaneAndRedraw:(bool)arg1;

@end

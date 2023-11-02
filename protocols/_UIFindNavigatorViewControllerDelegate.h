
@protocol _UIFindNavigatorViewControllerDelegate <NSObject>

@required

- (bool)findNavigatorShouldDismissOnResponderChange:(_UIFindNavigatorViewController *)arg1;
- (void)findNavigatorViewControllerDidRequestDismissal:(_UIFindNavigatorViewController *)arg1;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(_UIFindNavigatorViewController *)arg1;

@end

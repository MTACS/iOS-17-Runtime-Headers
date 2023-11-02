
@protocol MPAVRoutingViewControllerThemeDelegate <NSObject>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForRoutingViewController:(MPAVRoutingViewController *)arg1;
- (void)routingViewController:(MPAVRoutingViewController *)arg1 willDisplayCell:(UITableViewCell<MPAVRoutingThemeableCellView> *)arg2;
- (void)routingViewController:(MPAVRoutingViewController *)arg1 willDisplayHeaderView:(MPAVRoutingTableViewHeaderView *)arg2;

@end

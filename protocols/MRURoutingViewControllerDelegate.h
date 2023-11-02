
@protocol MRURoutingViewControllerDelegate <NSObject>

@optional

- (void)routingViewController:(MRURoutingViewController *)arg1 didPickRoutingViewItem:(MPAVRoutingViewItem *)arg2;
- (void)routingViewController:(MRURoutingViewController *)arg1 didSelectRoutingViewItem:(MPAVRoutingViewItem *)arg2;
- (void)routingViewControllerDidUpdateItems:(MRURoutingViewController *)arg1;

@end

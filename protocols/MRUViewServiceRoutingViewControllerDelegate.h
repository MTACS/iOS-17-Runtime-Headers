
@protocol MRUViewServiceRoutingViewControllerDelegate <NSObject>

@required

- (void)viewServiceRoutingViewControllerDidChangeSize:(MRUViewServiceRoutingViewController *)arg1;
- (void)viewServiceRoutingViewControllerDidDismiss:(MRUViewServiceRoutingViewController *)arg1;
- (void)viewServiceRoutingViewControllerDidDismiss:(MRUViewServiceRoutingViewController *)arg1 withCustomRowTapped:(NSString *)arg2;

@end


@protocol SKUIProductPageChildViewController <NSObject>

@required

- (<SKUIProductPageChildViewControllerDelegate> *)delegate;
- (SKUIProductPageHeaderViewController *)headerViewController;
- (UIScrollView *)scrollView;
- (void)setDelegate:(id <SKUIProductPageChildViewControllerDelegate>)arg1;
- (void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1;

@end

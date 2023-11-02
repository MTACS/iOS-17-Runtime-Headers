
@protocol SUUIProductPageChildViewController <NSObject>

@required

- (<SUUIProductPageChildViewControllerDelegate> *)delegate;
- (SUUIProductPageHeaderViewController *)headerViewController;
- (UIScrollView *)scrollView;
- (void)setDelegate:(id <SUUIProductPageChildViewControllerDelegate>)arg1;
- (void)setHeaderViewController:(SUUIProductPageHeaderViewController *)arg1;

@end

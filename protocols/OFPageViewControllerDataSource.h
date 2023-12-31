
@protocol OFPageViewControllerDataSource <NSObject>

@required

- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerAfterViewController:(OFUIViewController *)arg2;
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerBeforeViewController:(OFUIViewController *)arg2;

@optional

- (long long)presentationCountForPageViewController:(OFPageViewController *)arg1;
- (long long)presentationIndexForPageViewController:(OFPageViewController *)arg1;

@end

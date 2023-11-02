
@protocol AMSUIWebPageProvider <AMSUIWebModelInterface>

@required

- (NSString *)backgroundColor;
- (UIViewController<AMSUIWebPagePresenter> *)createViewControllerForContainer:(AMSUIWebContainerViewController *)arg1;
- (bool)disableReappearPlaceholder;
- (AMSMetricsEvent *)impressionEvent;
- (AMSBinaryPromise *)loadPage;
- (AMSUIWebNavigationBarModel *)navigationBar;
- (struct CGSize { double x1; double x2; })windowSize;

@end

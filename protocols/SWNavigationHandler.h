
@protocol SWNavigationHandler <NSObject>

@required

- (unsigned long long)handleRequest:(NSURLRequest *)arg1;

@optional

- (void)commitViewController:(UIViewController *)arg1 URLRequest:(NSURLRequest *)arg2;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;

@end

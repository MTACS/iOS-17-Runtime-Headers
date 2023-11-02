
@protocol SWNavigationManager <NSObject>

@required

- (unsigned long long)actionForRequest:(NSURLRequest *)arg1;
- (void)addObserver:(id <SWNavigationObserver>)arg1;
- (void)commitViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
- (void)registerHandler:(id <SWNavigationHandler>)arg1;
- (void)registerHandler:(id <SWNavigationHandler>)arg1 extension:(NSString *)arg2;
- (void)registerHandler:(id <SWNavigationHandler>)arg1 scheme:(NSString *)arg2;
- (void)removeObserver:(id <SWNavigationObserver>)arg1;
- (bool)shouldPreviewRequest:(NSURLRequest *)arg1;

@end

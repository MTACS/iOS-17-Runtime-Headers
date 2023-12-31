
@protocol SKUIURLResolverDelegate <NSObject>

@required

- (void)URLResolver:(SKUIURLResolver *)arg1 showTransientViewController:(UIViewController *)arg2;
- (void)URLResolver:(SKUIURLResolver *)arg1 showURL:(SKUIURL *)arg2 withTabIdentifier:(NSString *)arg3;
- (UIViewController *)presentationViewControllerForURLResolver:(SKUIURLResolver *)arg1;

@optional

- (void)URLResolver:(SKUIURLResolver *)arg1 didFinishWithResult:(bool)arg2;
- (bool)URLResolver:(SKUIURLResolver *)arg1 shouldPerformDefaultActionForURL:(SKUIURL *)arg2;

@end


@protocol SUUIURLResolverDelegate <NSObject>

@required

- (void)URLResolver:(SUUIURLResolver *)arg1 showTransientViewController:(UIViewController *)arg2;
- (void)URLResolver:(SUUIURLResolver *)arg1 showURL:(SUUIURL *)arg2 withTabIdentifier:(NSString *)arg3;
- (UIViewController *)presentationViewControllerForURLResolver:(SUUIURLResolver *)arg1;

@optional

- (void)URLResolver:(SUUIURLResolver *)arg1 didFinishWithResult:(bool)arg2;
- (bool)URLResolver:(SUUIURLResolver *)arg1 shouldPerformDefaultActionForURL:(SUUIURL *)arg2;

@end

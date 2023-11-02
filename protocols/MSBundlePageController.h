
@protocol MSBundlePageController <NSObject>

@required

+ (id)new;

- (id)init;
- (id)initWithPlugIn:(id <WKWebProcessPlugIn>)arg1 contextController:(WKWebProcessPlugInBrowserContextController *)arg2;
- (void)invalidate;

@end

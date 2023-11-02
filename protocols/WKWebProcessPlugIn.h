
@protocol WKWebProcessPlugIn <NSObject>

@optional

- (NSArray *)additionalClassesForParameterCoder;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 didCreateBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg2;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 initializeWithObject:(id)arg2;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 willDestroyBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg2;

@end


@protocol IAMWebProcessDelegate <NSObject>

@required

- (void)webProcessJSODidCallClose;
- (void)webProcessJSODidCallOpen:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)webProcessJSODidCallPerformAction:(NSDictionary *)arg1 options:(NSDictionary *)arg2;
- (void)webProcessJSODidReportEvent:(NSDictionary *)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;

@end

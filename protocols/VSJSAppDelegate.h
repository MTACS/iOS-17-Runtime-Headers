
@protocol VSJSAppDelegate <NSObject>

@required

- (void)app:(VSJSApp *)arg1 didFailToStartWithError:(NSError *)arg2;
- (void)app:(VSJSApp *)arg1 prewarmWithContext:(JSContext *)arg2;
- (void)appDidStart:(VSJSApp *)arg1;
- (void)appDidStop:(VSJSApp *)arg1;

@end

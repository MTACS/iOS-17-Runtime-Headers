
@protocol SUUIJSApplication <JSExport>

@required

- (bool)isRunningTests;
- (void)launchComplete:(NSDictionary *)arg1;
- (void)launchFailed;
- (bool)pageRenderMetricsEnabled;
- (void)sendDocumentMessage:(IKDOMDocument *)arg1 :(NSString *)arg2 :(NSDictionary *)arg3;

@end
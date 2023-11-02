
@protocol ECWebContentObserver <NSObject>

@required

- (void)baseURL:(NSURL *)arg1 didRequestRemoteContentURLs:(NSArray *)arg2;
- (void)logWebBundleMessage:(NSString *)arg1;
- (void)receiveDataDetectionResults:(NSArray *)arg1;
- (void)requestDataDetectionResultsWithBaseURL:(NSURL *)arg1;

@end

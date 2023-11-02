
@protocol EMRemoteContentURLSessionObserver <NSObject>

@required

- (void)remoteContentURLSession:(EMRemoteContentURLSession *)arg1 failedToProxyURL:(NSURL *)arg2 failureReason:(long long)arg3;

@end


@protocol RPBroadcastDaemonProtocol <NSObject>

@required

- (void)finishBroadcastWithError:(NSError *)arg1;
- (void)ping;
- (void)updateBroadcastURL:(NSURL *)arg1;
- (void)updateServiceInfo:(NSDictionary *)arg1;

@end

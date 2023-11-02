
@protocol MGRemoteQueryClientBrowserDelegate <NSObject>

@required

- (void)browser:(MGRemoteQueryClientBrowser *)arg1 foundTarget:(MGRemoteQueryClientTarget *)arg2;
- (void)browser:(MGRemoteQueryClientBrowser *)arg1 invalidatedWithError:(NSError *)arg2;
- (void)browser:(MGRemoteQueryClientBrowser *)arg1 lostTarget:(MGRemoteQueryClientTarget *)arg2;

@end


@protocol CPSSessionProxyDelegate <NSObject>

@optional

- (void)proxy:(CPSSessionProxy *)arg1 didDetermineAvailability:(bool)arg2;
- (void)proxy:(CPSSessionProxy *)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)proxy:(CPSSessionProxy *)arg1 didRetrieveApplicationIcon:(NSURL *)arg2;
- (void)proxy:(CPSSessionProxy *)arg1 didRetrieveHeroImage:(NSURL *)arg2;
- (void)proxyAppDidLaunchForTesting:(CPSSessionProxy *)arg1;
- (void)proxyDidChangeProgress:(CPSSessionProxy *)arg1;
- (void)proxyDidInstallApplicationPlaceholder:(CPSSessionProxy *)arg1;
- (void)proxyDidRetrieveBusinessIcon:(CPSSessionProxy *)arg1;
- (void)proxyDidUpdateMetadata:(CPSSessionProxy *)arg1;
- (void)proxyRemoteServiceDidCrash:(CPSSessionProxy *)arg1;

@end

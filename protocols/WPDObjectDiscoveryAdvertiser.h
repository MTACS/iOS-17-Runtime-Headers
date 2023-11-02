
@protocol WPDObjectDiscoveryAdvertiser <NSObject>

@required

- (NSError *)addAdvertisingRequest:(WPAdvertisingRequest *)arg1 forClient:(NSUUID *)arg2;
- (NSError *)removeAdvertisingRequest:(WPAdvertisingRequest *)arg1 forClient:(NSUUID *)arg2;
- (void)removeAdvertisingRequestsForClient:(NSUUID *)arg1;

@end

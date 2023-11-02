
@protocol WPDObjectDiscoveryScanner <NSObject>

@required

- (NSError *)addScanRequest:(WPScanRequest *)arg1 forClient:(NSUUID *)arg2;
- (NSArray *)getScanRequestsForClient:(NSUUID *)arg1;
- (void)removeScanRequestsForClient:(NSUUID *)arg1;
- (void)updateNearbyTokens:(NSArray *)arg1;
- (void)updateScanner;

@end

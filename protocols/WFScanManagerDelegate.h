
@protocol WFScanManagerDelegate <NSObject>

@required

- (void)scanManager:(WFScanManager *)arg1 updatedPartialResults:(NSSet *)arg2;
- (void)scanManagerScanningDidFinish:(WFScanManager *)arg1 withResults:(NSSet *)arg2 error:(NSError *)arg3;

@optional

- (void)scanManager:(WFScanManager *)arg1 didFindHotspotHelperNetworks:(NSSet *)arg2;
- (void)scanManager:(WFScanManager *)arg1 didFinishScanRequest:(WFScanRequest *)arg2 results:(NSSet *)arg3 error:(NSError *)arg4 timeElapsed:(double)arg5;
- (NSSet *)scanManager:(WFScanManager *)arg1 filterScanResults:(NSSet *)arg2;
- (void)scanManager:(WFScanManager *)arg1 stateDidChange:(long long)arg2;
- (void)scanManager:(WFScanManager *)arg1 willStartScanRequest:(WFScanRequest *)arg2;
- (NSSet *)scanManagerKnownHiddenNetworkNames:(WFScanManager *)arg1;
- (void)scanManagerScanningWillStart:(WFScanManager *)arg1;
- (bool)scanManagerShouldSupportHotspotHelper:(WFScanManager *)arg1;
- (bool)scanManagerShouldSupportUnfilteredScanning:(WFScanManager *)arg1;

@end

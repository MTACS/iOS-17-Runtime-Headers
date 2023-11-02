
@protocol HMDWACScanner

@required

- (void)backoff;
- (void)resume;
- (void)setDelegate:(id <HMDWACScannerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)start;
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(HAPAccessoryServerBrowserIP *)arg1;
- (void)stop;

@end


@protocol CAMPeopleProximityScanner <NSObject>

@required

- (<CAMPeopleProximityScannerDelegate> *)delegate;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1 delegate:(id <CAMPeopleProximityScannerDelegate>)arg2;
- (bool)isScanning;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)startDiscoveryWithScanRate:(unsigned long long)arg1 timeout:(double)arg2;
- (void)stopDiscovery;

@end


@interface WPHomeKit : WPClient {
    <WPHomeKitDelegate> * _delegate;
    CBDiscovery * _homeKitCBDiscovery;
}

@property (nonatomic) <WPHomeKitDelegate> *delegate;

- (void).cxx_destruct;
- (void)checkAllowDuplicate;
- (id)clientAsString;
- (unsigned char)clientTypeFromHomeKitType:(long long)arg1;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)deviceFoundHandler:(id)arg1 cached:(bool)arg2;
- (void)deviceLostHandler:(id)arg1;
- (bool)discoveryFlagsContains:(long long)arg1;
- (struct { long long x1; long long x2; long long x3; })dutyCycleToScanningRates:(long long)arg1;
- (id)homeKitCBDiscovery;
- (struct { int x1; int x2; })homeKitScanTypeToCBDiscoveryScanRates:(long long)arg1;
- (long long)homeKitTypeFromCBDiscoveryFlag:(unsigned long long)arg1;
- (long long)homeKitTypeFromClientType:(unsigned char)arg1;
- (unsigned long long)homeKitTypeToCBDiscoveryFlag:(long long)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)invalidateWHBScanSession;
- (bool)isHomeKitScanActive:(unsigned long long)arg1;
- (bool)isWHBSupported;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeKitCBDiscovery:(id)arg1;
- (void)setStartScanParametersfor:(id)arg1 withValues:(id)arg2 forType:(long long)arg3;
- (void)setStopScanParametersforType:(long long)arg1;
- (id)startCBDiscoveryScan:(id)arg1 forType:(long long)arg2;
- (void)startScanningWithData:(id)arg1 forType:(long long)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)stopCBDiscoveryScan:(long long)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)tearDownCBDiscovery;

@end


@interface WPObjectDiscovery : WPClient {
    <WPObjectDiscoveryDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <WPObjectDiscoveryDelegate> *delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)clientAsString;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)devicesDiscovered:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)isScanningEnabled;
- (bool)isValidScanOptions:(id)arg1;
- (bool)isValidScanRequest:(id)arg1;
- (id)queue;
- (void)receivedTestResponse:(id)arg1;
- (id)scanRequestFromScanMode:(long long)arg1 UpdateTime:(double)arg2;
- (id)scanRequestFromScanOptions:(id)arg1;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningFailedWithError:(id)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startScanning;
- (void)startScanningWithMode:(long long)arg1;
- (void)startScanningWithMode:(long long)arg1 Timeout:(double)arg2;
- (void)startScanningWithOptions:(id)arg1;
- (void)startTest;
- (void)stateDidChange:(long long)arg1;
- (void)stopScanning;
- (void)stopTest;
- (void)updateBeaconingExtended:(id)arg1;
- (void)updateBeaconingInterval:(id)arg1;
- (void)updateBeaconingKeys:(id)arg1;
- (void)updateBeaconingState:(id)arg1;
- (void)updateBeaconingStatus:(id)arg1;
- (void)updateNearOwnerTokens:(id)arg1;
- (void)updateScanningRequest:(id)arg1 withUpdate:(id /* block */)arg2;

@end

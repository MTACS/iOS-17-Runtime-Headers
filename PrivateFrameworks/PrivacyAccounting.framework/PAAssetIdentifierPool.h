
@interface PAAssetIdentifierPool : NSObject <PAAssetIdentifierPooling> {
    PABasicAssetIdentifierPool * _assetIdentifierPool;
    <PAProcessStateMonitoringEnding> * _stateMonitorHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)arg1;
- (void)addAssetIdentifiers:(id)arg1 accessEventCount:(unsigned long long)arg2;
- (void)drainPool;
- (id)initWithMaxPoolSize:(unsigned long long)arg1 autoDrainInterval:(double)arg2 bundleRecord:(id)arg3 aggregateVisibilityStateMonitor:(id)arg4 onQueue:(id)arg5 delegate:(id)arg6;
- (void)invalidate;

@end

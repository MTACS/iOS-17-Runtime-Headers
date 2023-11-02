
@interface PABasicAssetIdentifierPool : NSObject <PAAggregateVisibilityStateMonitorDelegate, PAAssetIdentifierPooling> {
    unsigned long long  _assetIdentifierPoolSize;
    NSMutableSet * _assetIdentifiers;
    double  _autoDrainInterval;
    <PAAssetIdentifierPoolDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _drainTimer;
    unsigned long long  _eventCount;
    unsigned long long  _maxPoolSize;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _stateMonitoringEstablished;
    long long  _visibilityState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long visibilityState;

- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)arg1;
- (void)addAssetIdentifiers:(id)arg1 accessEventCount:(unsigned long long)arg2;
- (void)dealloc;
- (void)drainPool;
- (id)initWithMaxPoolSize:(unsigned long long)arg1 autoDrainInterval:(double)arg2 onQueue:(id)arg3 delegate:(id)arg4;
- (void)invalidate;
- (void)setVisibilityState:(long long)arg1;
- (long long)visibilityState;

@end


@interface BMStoreSource : BMSource {
    BMAccessClient * _accessClient;
    BMComputeSourceClient * _computeSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    void * _lockStateRegistration;
    NSMutableArray * _pendingWrites;
    bool  _shouldSendMetrics;
    NSObject<OS_os_transaction> * _transaction;
    BMStreamDatastoreWriter * _writer;
}

@property (nonatomic, readonly) BMComputeSourceClient *computeSource;

- (void).cxx_destruct;
- (void)_processPendingWrites;
- (bool)_writeEvent:(id)arg1 timestamp:(double)arg2 signpostID:(unsigned long long)arg3 notifyCompute:(bool)arg4;
- (id)computeSource;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 accessClient:(id)arg3;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 accessClient:(id)arg3 eventDataClass:(Class)arg4;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 timestamp:(double)arg2;

@end

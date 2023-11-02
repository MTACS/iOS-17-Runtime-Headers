
@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _configurationLock;
    HDDataCollectionManager * _dataCollectionManager;
    _Atomic bool  _hasStartedCollectors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_canStartCollectors;
    NSMapTable * _lock_collectorRegistry;
    HDDataAggregatorConfiguration * _lock_configuration;
    NSDate * _unitTest_lastObliterationDate;
}

@property (copy) HDDataAggregatorConfiguration *configuration;
@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKObjectType *objectType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allCollectors;
- (id)configuration;
- (id)configurationForCollector:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)dataCollectionManager;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (id)diagnosticDescription;
- (bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4;
- (bool)doesDatumPredateDatabaseObliteration:(id)arg1;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)objectType;
- (bool)persistForCollector:(id)arg1 usedDatums:(id)arg2 source:(id)arg3 device:(id)arg4 error:(id*)arg5 persistenceHandler:(id /* block */)arg6;
- (bool)persistObjects:(id)arg1 usedDatums:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 resolveAssociations:(bool)arg6 error:(id*)arg7;
- (void)recomputeCollectorConfiguration;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)resume;
- (void)setConfiguration:(id)arg1;
- (void)unitTest_setLastObliterationDate:(id)arg1;
- (void)unregisterDataCollector:(id)arg1;

@end

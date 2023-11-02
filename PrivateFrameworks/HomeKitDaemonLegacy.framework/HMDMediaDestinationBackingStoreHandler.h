
@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {
    <HMDMediaDestinationBackingStoreHandlerDelegate> * _delegate;
    HMMutableMediaDestination * _destination;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDMediaDestinationManagerMetricsDispatcher * _metricsDispatcher;
}

@property <HMDMediaDestinationBackingStoreHandlerDelegate> *delegate;
@property (readonly) HMMediaDestination *destination;
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher;

+ (id)backingStoreObjectForMediaDestination:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (id)destination;
- (id)initWithDestination:(id)arg1 backingStore:(id)arg2 metricsDispatcher:(id)arg3 delegate:(id)arg4;
- (void)mergeDestination:(id)arg1;
- (id)metricsDispatcher;
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)setAudioGroupIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateAudioGroupIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end

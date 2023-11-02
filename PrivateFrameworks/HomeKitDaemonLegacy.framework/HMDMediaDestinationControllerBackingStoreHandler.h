
@interface HMDMediaDestinationControllerBackingStoreHandler : HMDBackingStoreHandler <HMFLogging> {
    HMMutableMediaDestinationControllerData * _data;
    <HMDMediaDestinationControllerBackingStoreHandlerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDMediaDestinationControllerMetricsEventDispatcher * _metricsEventDispatcher;
}

@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaDestinationControllerBackingStoreHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly) Class superclass;

+ (id)backingStoreObjectForData:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)data;
- (id)delegate;
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;
- (id)logIdentifier;
- (void)mergeData:(id)arg1;
- (id)metricsEventDispatcher;
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeControllerWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsEventDispatcher:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdatedSupportedOptions:(unsigned long long)arg1 message:(id)arg2;
- (void)updateAvailableDestinationIdentifiers:(id)arg1;
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDestinationIdentifier:(id)arg1;
- (void)updateDestinationIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSupportedOptions:(unsigned long long)arg1;
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end

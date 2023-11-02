
@interface HMDThreadNetworkMetadataStore : HMFObject <HMDThreadNetworkMetadataStore, HMFLogging> {
    unsigned long long  _networkChangedHandlingLastUpdatedTime;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _workQueueNetworkChanged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long networkChangedHandlingLastUpdatedTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueueNetworkChanged;

+ (id)_testOnlyStore;
+ (id)defaultStore;
+ (id)logCategory;
+ (id)new;

- (void).cxx_destruct;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)arg1;
- (void)_removePreferredNetworkWithCompletion:(id /* block */)arg1;
- (void)_retrieveMetadataWithCompletion:(id /* block */)arg1;
- (void)_scheduleTriggerPreferredNetworkUpdateWithCompletion:(id /* block */)arg1;
- (void)_triggerPreferredNetworkUpdateWithCompletion:(id /* block */)arg1;
- (void)checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initInternal;
- (unsigned long long)networkChangedHandlingLastUpdatedTime;
- (void)removePreferredNetworkWithCompletion:(id /* block */)arg1;
- (void)retrieveMetadataWithCompletion:(id /* block */)arg1;
- (void)setNetworkChangedHandlingLastUpdatedTime:(unsigned long long)arg1;
- (void)triggerPreferredNetworkUpdateWithCompletion:(id /* block */)arg1;
- (id)workQueue;
- (id)workQueueNetworkChanged;

@end

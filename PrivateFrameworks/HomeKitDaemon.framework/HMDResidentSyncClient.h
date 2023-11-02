
@interface HMDResidentSyncClient : HMDResidentSyncController <HMDResidentSyncClient, HMFTimerDelegate> {
    <HMDResidentSyncClientDataSource> * _dataSource;
    HMFMessageDispatcher * _dispatcher;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    MKFResidentSyncMetadata * _metadata;
    HMFFuture * _performFetchJitterFuture;
    HMFPromise * _performFetchJitterPromise;
    NSHashTable * _requestsInProgress;
    bool  _residentCapable;
    <HMDResidentDeviceManager> * _residentDeviceManager;
    bool  _retryRequired;
    HMFExponentialBackoffTimer * _retryTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleHomeDataChanged:(id)arg1;
- (void)handlePrimaryResidentChanged:(id)arg1;
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 dispatcher:(id)arg3 residentDeviceManager:(id)arg4 notificationCenter:(id)arg5 persistence:(id)arg6 isResidentCapable:(bool)arg7 dataSource:(id)arg8 logEventSubmitter:(id)arg9;
- (id)logEventSubmitter;
- (void)performResidentRequest:(id)arg1 options:(unsigned long long)arg2;
- (void)performSync;
- (id)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end

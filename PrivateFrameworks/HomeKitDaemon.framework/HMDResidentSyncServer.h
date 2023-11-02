
@interface HMDResidentSyncServer : HMDResidentSyncController <HMDResidentSyncServer> {
    NSPersistentHistoryToken * _currentToken;
    <HMDResidentSyncServerDataSource> * _dataSource;
    HMFMessageDispatcher * _dispatcher;
    bool  _isPrimaryResident;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    <HMDResidentDeviceManager> * _residentDeviceManager;
    NSPersistentStore * _store;
    NSPersistentHistoryToken * _storeExemplarToken;
}

@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;

- (void).cxx_destruct;
- (void)_handleFetchHomeData:(id)arg1;
- (long long)currentToken:(id*)arg1 andHistory:(id*)arg2 fromToken:(id)arg3 limit:(long long)arg4 error:(id*)arg5;
- (id)decodeToken:(id)arg1 error:(id*)arg2;
- (void)handlePersistentStoreChanged:(id)arg1;
- (void)handlePrimaryResidentChanged:(id)arg1;
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 dispatcher:(id)arg3 residentDeviceManager:(id)arg4 notificationCenter:(id)arg5 persistence:(id)arg6 dataSource:(id)arg7 logEventSubmitter:(id)arg8;
- (void)interceptRemoteResidentRequest:(id)arg1 proceed:(id /* block */)arg2;
- (id)logEventSubmitter;
- (id)start;
- (void)stop;

@end

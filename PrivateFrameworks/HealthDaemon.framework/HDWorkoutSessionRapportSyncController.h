
@interface HDWorkoutSessionRapportSyncController : NSObject <HDRapportMessengerObserver, HDWorkoutSessionSyncController> {
    HKRateLimiter * _dataRateLimiter;
    NSObject<OS_dispatch_source> * _heartbeatSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _lock_lastPingDate;
    NSMutableDictionary * _lock_pendingTransactionsByRequest;
    HDRapportMessenger * _rapportMessenger;
    NSObject<OS_dispatch_source> * _receiveHeartbeatTimeoutSource;
    NSObject<OS_dispatch_source> * _sendHeartbeatTimeoutSource;
    HDWorkoutSessionServer * _sessionServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_decodedTransactionWithData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_cancelReceiveHeartbeatTimeout;
- (void)_cancelSendHeartbeat;
- (void)_cancelSendHeartbeatTimeout;
- (void)_enqueueTransaction:(id)arg1 requestName:(id)arg2;
- (bool)_isDataRateLimiterDisabledByUserDefaults;
- (void)_lock_cancelReceiveHeartbeatTimeout;
- (void)_lock_cancelSendHeartbeat;
- (void)_lock_cancelSendHeartbeatTimeout;
- (void)_receiveHeartbeatDidTimeout;
- (void)_resetHeartbeat;
- (void)_scheduleHeartbeat;
- (void)_scheduleReceiveHeartbeatTimeout;
- (void)_scheduleSendHeartbeatTimeout;
- (void)_sendHeartbeat;
- (void)_sendPendingTransactions;
- (double)heartbeatInterval;
- (double)heartbeatReceiveTimeout;
- (id)initWithRapportMessenger:(id)arg1 sessionServer:(id)arg2;
- (void)rapportMessenger:(id)arg1 didReceiveRequest:(id)arg2 data:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)receivedBackgroundRuntimeRequestWithCompletion:(id /* block */)arg1;
- (void)receivedCurrentActivityUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedDataFromRemoteWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedEventUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedHeartbeatWithCompletion:(id /* block */)arg1;
- (void)receivedMirroringStopRequestWithCompletion:(id /* block */)arg1;
- (void)receivedRecoveryRequestWithResponseHandler:(id /* block */)arg1;
- (void)receivedStateEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedStateUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)sendBackgroundRuntimeRequestWithCompletion:(id /* block */)arg1;
- (void)sendCurrentActivityUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDataToRemoteWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)sendEventUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMirroringStartRequestWithCompletion:(id /* block */)arg1;
- (void)sendMirroringStopRequestWithCompletion:(id /* block */)arg1;
- (void)sendRequest:(id)arg1 transaction:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 transaction:(id /* block */)arg2 responseHandler:(id /* block */)arg3;
- (void)sendStateEvent:(long long)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (void)sendStateUpdate:(long long)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (id)sessionConfiguration;
- (id)sessionGlobalState;

@end

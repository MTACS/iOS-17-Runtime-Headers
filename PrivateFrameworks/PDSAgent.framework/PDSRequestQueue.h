
@interface PDSRequestQueue : NSObject {
    long long  _authRetries;
    <PDSRequestQueueDelegate> * _delegate;
    id /* block */  _entryStoreBlock;
    PDSRequest * _inflightRequest;
    NSDate * _lastReauthAttempt;
    FTMessageDelivery * _messageDelivery;
    long long  _messageTimeout;
    id /* block */  _pushTokenBlock;
    NSObject<OS_dispatch_queue> * _queue;
    PDSRequest * _queuedRequest;
    PDSUserTracker * _userTracker;
}

@property (nonatomic) long long authRetries;
@property (nonatomic) <PDSRequestQueueDelegate> *delegate;
@property (nonatomic, copy) id /* block */ entryStoreBlock;
@property (nonatomic, retain) PDSRequest *inflightRequest;
@property (nonatomic, retain) NSDate *lastReauthAttempt;
@property (nonatomic, retain) FTMessageDelivery *messageDelivery;
@property (nonatomic) long long messageTimeout;
@property (nonatomic, copy) id /* block */ pushTokenBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) PDSRequest *queuedRequest;
@property (nonatomic, retain) PDSUserTracker *userTracker;

- (void).cxx_destruct;
- (void)_cancelPendingRequests;
- (void)_dequeueIfNeeded;
- (id)_deviceInfo;
- (void)_flightRequest:(id)arg1;
- (id)_hwVersion;
- (bool)_isAuthIssue:(long long)arg1;
- (void)_logEntries:(id)arg1;
- (void)_logProtoUserPushToken:(id)arg1;
- (id)_machineID;
- (id)_osVersion;
- (void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2;
- (void)_removeDeadEntriesForUser:(id)arg1 withError:(id*)arg2;
- (long long)authRetries;
- (id)delegate;
- (bool)enqueueRequest:(id)arg1;
- (id /* block */)entryStoreBlock;
- (id)inflightRequest;
- (id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(id /* block */)arg4 entryStoreBlock:(id /* block */)arg5;
- (id)lastReauthAttempt;
- (id)messageDelivery;
- (long long)messageTimeout;
- (id /* block */)pushTokenBlock;
- (id)queue;
- (id)queuedRequest;
- (void)setAuthRetries:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntryStoreBlock:(id /* block */)arg1;
- (void)setInflightRequest:(id)arg1;
- (void)setLastReauthAttempt:(id)arg1;
- (void)setMessageDelivery:(id)arg1;
- (void)setMessageTimeout:(long long)arg1;
- (void)setPushTokenBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedRequest:(id)arg1;
- (void)setUserTracker:(id)arg1;
- (id)userTracker;

@end


@interface MTCompanionSyncService : NSObject <MTSyncService, MTSyncStatusProviderDelegate, SYServiceDelegate> {
    <MTSyncServiceDelegate> * _delegate;
    NSMutableDictionary * _pendingRequests;
    MTCompanionSyncSession * _receivingSession;
    MTExponentialBackOffTimer * _retryTimer;
    MTCompanionSyncSession * _sendingSession;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <NAScheduler> * _serializer;
    SYService * _service;
    <MTSyncStatusProvider> * _syncStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pendingRequests;
@property (nonatomic, retain) MTCompanionSyncSession *receivingSession;
@property (nonatomic, retain) MTExponentialBackOffTimer *retryTimer;
@property (nonatomic, retain) MTCompanionSyncSession *sendingSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) SYService *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MTSyncStatusProvider> *syncStatusProvider;

+ (bool)shouldRetryForError:(id)arg1;

- (void).cxx_destruct;
- (void)_requestSync:(unsigned long long)arg1;
- (void)_retryRequest;
- (id)delegate;
- (id)description;
- (id)initWithSyncStatusProvider:(id)arg1;
- (id)pendingRequests;
- (id)receivingSession;
- (id)requestSync:(unsigned long long)arg1;
- (bool)resume:(id*)arg1;
- (id)retryTimer;
- (id)sendingSession;
- (id)serialQueue;
- (id)serializer;
- (id)service;
- (void)service:(id)arg1 receivingSessionEnded:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 sendingSessionEnded:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
- (bool)service:(id)arg1 startReceivingSession:(id)arg2 error:(id*)arg3;
- (bool)service:(id)arg1 startSendingSession:(id)arg2 error:(id*)arg3;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setReceivingSession:(id)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setSendingSession:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSyncStatusProvider:(id)arg1;
- (void)suspend;
- (id)syncStatusProvider;
- (void)syncStatusProvider:(id)arg1 didChangeSyncStatus:(unsigned long long)arg2;

@end

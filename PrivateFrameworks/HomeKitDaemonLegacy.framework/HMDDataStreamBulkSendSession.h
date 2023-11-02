
@interface HMDDataStreamBulkSendSession : NSObject <HMDDataStreamBulkSendSession, HMFLogging> {
    id /* block */  _activeReadHandler;
    HMDDataStreamBulkSendProtocol * _bulkSendProtocol;
    bool  _hasReceivedEof;
    bool  _isClosed;
    NSString * _logIdentifier;
    NSError * _pendingError;
    NSMutableArray * _pendingReads;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _sessionIdentifier;
}

@property (getter=isActive, readonly) bool active;
@property (nonatomic, copy) id /* block */ activeReadHandler;
@property (nonatomic, readonly) HMDDataStreamBulkSendProtocol *bulkSendProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, retain) NSError *pendingError;
@property (nonatomic, retain) NSMutableArray *pendingReads;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSNumber *sessionIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeSession;
- (void)_pumpReadDataIfPossible;
- (id /* block */)activeReadHandler;
- (void)asyncHandleIncomingPackets:(id)arg1 isEof:(bool)arg2;
- (void)asyncHandleRemoteCloseWithError:(id)arg1;
- (id)bulkSendProtocol;
- (void)cancelWithReason:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2 queue:(id)arg3 logIdentifier:(id)arg4;
- (bool)isActive;
- (id)logIdentifier;
- (id)pendingError;
- (id)pendingReads;
- (id)queue;
- (void)read:(id /* block */)arg1;
- (id)sessionIdentifier;
- (void)setActiveReadHandler:(id /* block */)arg1;
- (void)setPendingError:(id)arg1;
- (void)setPendingReads:(id)arg1;

@end

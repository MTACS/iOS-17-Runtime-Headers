
@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <HMDIDSServiceDelegate> {
    HMDAppleAccountManager * _appleAccountManager;
    NSMutableDictionary * _destinationAddress;
    bool  _forceIDSScreening;
    NSMutableArray * _messageContexts;
    NSMutableOrderedSet * _messageDedupBuffer;
    bool  _modernTransport;
    NSMutableDictionary * _pendingResponseTimers;
    NSMutableDictionary * _pendingResponses;
    NSMutableDictionary * _receivedResponses;
    HMDRemoteAccountManager * _remoteAccountManager;
    NSMutableDictionary * _requestedCapabilities;
    HMFOperationBudget * _sendMessageBudget;
    <HMDIDSService> * _service;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *destinationAddress;
@property (nonatomic) bool forceIDSScreening;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableArray *messageContexts;
@property (nonatomic, readonly) NSMutableOrderedSet *messageDedupBuffer;
@property (getter=isModernTransport, nonatomic, readonly) bool modernTransport;
@property (nonatomic, readonly) NSMutableDictionary *pendingResponseTimers;
@property (nonatomic, readonly) NSMutableDictionary *pendingResponses;
@property (nonatomic, readonly) NSMutableDictionary *receivedResponses;
@property (nonatomic, readonly) HMDRemoteAccountManager *remoteAccountManager;
@property (nonatomic, readonly) NSMutableDictionary *requestedCapabilities;
@property (readonly) HMFOperationBudget *sendMessageBudget;
@property (nonatomic, readonly) <HMDIDSService> *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (long long)priorityForMessage:(id)arg1;
+ (id)queueOneIdentifierWithMessageName:(id)arg1 target:(id)arg2 collapseID:(id)arg3 timeToLive:(double)arg4 now:(id)arg5;
+ (unsigned long long)restriction;
+ (unsigned long long)sendMessageLimit;
+ (struct _HMFRate { unsigned long long x1; double x2; })sendMessageRate;

- (void).cxx_destruct;
- (void)_pendingResponseTimeoutFor:(id)arg1;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (void)_removePendingResponseTransaction:(id)arg1;
- (void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2;
- (bool)_shouldProcessLegacyIDSMessageFromID:(id)arg1 context:(id)arg2 message:(id*)arg3 service:(id)arg4;
- (void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3;
- (id)appleAccountManager;
- (bool)canSendMessage:(id)arg1;
- (id)destinationAddress;
- (id)deviceForSenderContext:(id)arg1;
- (bool)forceIDSScreening;
- (id)initModernTransportWithAccountRegistry:(id)arg1;
- (id)initModernTransportWithAccountRegistry:(id)arg1 service:(id)arg2 appleAccountManager:(id)arg3 remoteAccountManager:(id)arg4;
- (id)initWithAccountRegistry:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1 service:(id)arg2 appleAccountManager:(id)arg3 remoteAccountManager:(id)arg4;
- (bool)isModernTransport;
- (bool)isSecure;
- (bool)isValidMessage:(id)arg1;
- (void)legacyHandleIncomingRemoteMessage:(id)arg1 sourceDevice:(id)arg2 senderDeviceHandle:(id)arg3 isSecure:(bool)arg4 incomingMessage:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (id)logIdentifier;
- (id)messageContexts;
- (id)messageDedupBuffer;
- (id)pendingResponseTimers;
- (id)pendingResponses;
- (long long)qualityOfService;
- (id)receivedResponses;
- (id)remoteAccountManager;
- (id)requestedCapabilities;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 queueOneID:(id)arg7 error:(id*)arg8;
- (id)sendMessageBudget;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setForceIDSScreening:(bool)arg1;
- (id)start;
- (int)transportType;
- (id)workQueue;

@end

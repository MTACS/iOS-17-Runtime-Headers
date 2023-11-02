
@interface VCControlChannelDialog : VCObject {
    NSMutableArray * _cachedMessages;
    bool  _handshakeEnabled;
    NSObject<OS_dispatch_queue> * _handshakeOperationQueue;
    double  _handshakeStartTime;
    bool  _isHandshakeCommenced;
    bool  _isHandshakeMode;
    NSNumber * _participantID;
    NSString * _participantUUID;
    unsigned int  _sessionID;
    bool  _shouldFinishHandshake;
    NSMutableDictionary * _transactions;
    <VCControlChannelTransactionDelegate> * _weakTransactionDelegate;
}

@property (readonly) NSDictionary *transactions;

- (void)cacheOutgoingMessage:(id)arg1 topic:(id)arg2 timeout:(id)arg3 withOptions:(id)arg4;
- (void)checkForSignificantHandshakeDelayWithDelegate:(id)arg1;
- (void)confirmTransaction:(id)arg1;
- (void)dealloc;
- (void)doHandshakeWithMessage:(id)arg1 topic:(id)arg2 afterDelay:(double)arg3 withOptions:(id)arg4;
- (void)flushActiveTransactions;
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 participantUUID:(id)arg3 participantConfig:(struct { int x1; struct tagVCSecurityKeyHolder {} *x2; struct tagVCSecurityKeyHolder {} *x3; struct __CFData {} *x4; struct __CFData {} *x5; bool x6; }*)arg4 transactionDelegate:(id)arg5;
- (id)newDataFromMessage:(id)arg1 topic:(id)arg2 transactionID:(unsigned long long)arg3 isReliable:(bool)arg4 transactionDelegate:(id)arg5;
- (id)processMessageData:(id)arg1 participantID:(id)arg2 topic:(id*)arg3 transactionID:(id*)arg4 messageStatus:(unsigned int*)arg5 isInternalMessage:(bool*)arg6;
- (void)removeTransactionForTransactionID:(int)arg1;
- (void)resetHandshake;
- (void)sendAllCachedMessagesAndDisableHandshakeWhenDone;
- (bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 timeout:(id)arg3 withOptions:(id)arg4;
- (bool)sendReliableMessageInternal:(id)arg1 withTopic:(id)arg2 timeout:(id)arg3 useFastRetries:(bool)arg4 withOptions:(id)arg5;
- (bool)sendUnreliableMessage:(id)arg1 withTopic:(id)arg2 sessionID:(unsigned int)arg3 participantID:(id)arg4 transactionDelegate:(id)arg5;
- (void)startHandshakeWithMessage:(id)arg1 topic:(id)arg2 withOptions:(id)arg3;
- (id)transactions;

@end

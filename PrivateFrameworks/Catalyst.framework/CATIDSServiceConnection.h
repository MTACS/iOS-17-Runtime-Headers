
@interface CATIDSServiceConnection : NSObject <CATIDSMessageBroadcastHandler, CATIDSServiceConnectionDataAggregatorDelegate, CATIDSServiceConnectionDataMessageQueueDelegate, CATIDSServiceConnectionMessageProcessorDelegate> {
    bool  _closed;
    NSError * _closedError;
    <CATIDSServiceConnectionDelegate> * _delegate;
    CATIDSServiceConnectionMetadata * _metadata;
    <CATCancelable> * mAssertion;
    CATSerialOperationEnqueuer * mControlOperationEnqueuer;
    <CATIDSServiceConnectionDataAggregator> * mDataAggregator;
    <CATIDSServiceConnectionDataMessageQueue> * mDataMessageQueue;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    NSString * mDestinationAddress;
    <CATIDSPrimitives> * mIDSPrimitives;
    <CATResettableTimer> * mKeepAliveTimer;
    <CATIDSMessageBroadcaster> * mMessageBroadcaster;
    CATIDSServiceConnectionMessageProcessor * mMessageProcessor;
    <CATIDSSubscription> * mMessageSubscription;
    CATOperationQueue * mSendQueue;
    NSString * mSourceAppleID;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (getter=isClosed, nonatomic) bool closed;
@property (nonatomic, retain) NSError *closedError;
@property (nonatomic) <CATIDSServiceConnectionDelegate> *delegate;
@property (nonatomic, readonly) CATIDSServiceConnectionMetadata *metadata;

+ (id)acknowledgeContent;
+ (id)closeContentWithError:(id)arg1;
+ (id)connectionWithMetadata:(id)arg1 configuration:(id)arg2 IDSPrimitives:(id)arg3 messageBroadcaster:(id)arg4 timerSource:(id)arg5 dataMessageQueue:(id)arg6 dataAggregator:(id)arg7 assertion:(id)arg8 workQueue:(id)arg9 delegateQueue:(id)arg10 destinationAddress:(id)arg11 sourceAppleID:(id)arg12;
+ (id)connectionWithMetadata:(id)arg1 configuration:(id)arg2 capabilities:(id)arg3 IDSPrimitives:(id)arg4 messageBroadcaster:(id)arg5 timerSource:(id)arg6 assertion:(id)arg7 workQueue:(id)arg8 delegateQueue:(id)arg9 destinationAddress:(id)arg10 sourceAppleID:(id)arg11;
+ (id)keepAliveContent;
+ (id)keepAliveTimerIdentifier;

- (void).cxx_destruct;
- (void)_close;
- (void)_sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)close;
- (id)closedError;
- (void)connectionDataAggregator:(id)arg1 aggregatedData:(id)arg2 withNumber:(unsigned long long)arg3;
- (void)connectionDataAggregator:(id)arg1 isMissingSequenceNumbers:(id)arg2;
- (void)connectionDataAggregatorWantsToReportSequenceNumber:(id)arg1;
- (void)dataMessageQueue:(id)arg1 needsToSendContents:(id)arg2 shouldSkipTheLine:(bool)arg3 completion:(id /* block */)arg4;
- (void)dataMessageQueue:(id)arg1 wantsToCheckRemote:(unsigned long long)arg2;
- (id)delegate;
- (id)description;
- (id)initWithMetadata:(id)arg1 configuration:(id)arg2 IDSPrimitives:(id)arg3 messageBroadcaster:(id)arg4 timerSource:(id)arg5 dataMessageQueue:(id)arg6 dataAggregator:(id)arg7 assertion:(id)arg8 workQueue:(id)arg9 delegateQueue:(id)arg10 destinationAddress:(id)arg11 sourceAppleID:(id)arg12;
- (bool)isClosed;
- (void)keepAliveTimerDidFire:(id)arg1 fireCount:(unsigned long long)arg2 isFinalFire:(bool)arg3;
- (void)messageProcessor:(id)arg1 receivedExpectedSequence:(unsigned long long)arg2;
- (void)messageProcessor:(id)arg1 wantsAggregation:(id)arg2;
- (void)messageProcessor:(id)arg1 wantsRetransmission:(id)arg2;
- (void)messageProcessor:(id)arg1 wantsToAckUpTo:(unsigned long long)arg2;
- (void)messageProcessor:(id)arg1 wantsToCloseWithError:(id)arg2;
- (void)messageProcessorWantsToAcknowledgeRemote:(id)arg1;
- (void)messageProcessorWantsToExtendKeepAlive:(id)arg1;
- (id)metadata;
- (void)processMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (id)requestMissingDataContentWithExpectedSequenceNumber:(unsigned long long)arg1;
- (id)retransmitContentForSequenceNumbers:(id)arg1;
- (void)sendContent:(id)arg1;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)setClosed:(bool)arg1;
- (void)setClosedError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tearDownWithError:(id)arg1 shouldReportToRemote:(bool)arg2;

@end


@interface CATTransport : NSObject {
    <CATTransportDelegate> * _delegate;
    NSString * _name;
    CATOperationQueue * mControlQueue;
    CATStateMachine * mFSM;
    CATOperationQueue * mMessageQueue;
    CATTransport * mStrongSelf;
}

@property (nonatomic) <CATTransportDelegate> *delegate;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)delegateDidInvalidate;
- (void)delegateDidResume;
- (id)description;
- (void)didInterruptWithError:(id)arg1;
- (void)didInvalidate;
- (void)didReceiveMessage:(id)arg1;
- (void)enqueueDelegateCouldNotConnectWithError:(id)arg1;
- (void)enqueueDelegateDidConnect;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)enqueueDelegateDidReceiveMessage:(id)arg1;
- (void)enqueueSendForMessage:(id)arg1;
- (id)init;
- (void)invalidSendForMessage:(id)arg1;
- (void)invalidate;
- (void)invalidateConnection;
- (id)name;
- (id)operationToSendMessage:(id)arg1;
- (void)resume;
- (void)resumeConnection;
- (void)resumeQueue;
- (void)resumeQueueAndConnection;
- (void)sendHelloMessageAndResumeQueue;
- (void)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)suspend;
- (void)suspendConnection;
- (void)suspendQueue;
- (void)suspendQueueAndConnection;

@end

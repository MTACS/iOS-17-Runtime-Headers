
@interface ASIDSMessageCenter : NSObject <IDSServiceDelegate> {
    <ASIDSMessageCenterDelegate> * _delegate;
    IDSService * _idsService;
    NSObject<OS_dispatch_queue> * _incomingDispatchQueue;
    NSObject<OS_dispatch_queue> * _outgoingDispatchQueue;
    ASMessageQueue * _outgoingMessageQueue;
    ASMessageQueue * _persistedMessageQueue;
    ASMessageQueue * _retryMessageQueue;
    NSString * _serviceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASIDSMessageCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchAction:(SEL)arg1 invocationBlock:(id /* block */)arg2;
- (void)_dispatchMessage:(id)arg1 handler:(id)arg2 messageHandledCompletion:(id /* block */)arg3;
- (void)_handleErrorForMessage:(id)arg1;
- (void)_handleErrorSendingFinalizeHandshake:(id)arg1;
- (void)_handleErrorSendingInviteRequest:(id)arg1;
- (void)_handleErrorSendingInviteResponse:(id)arg1;
- (void)_handleErrorSendingWithdrawInviteRequest:(id)arg1;
- (void)_handleFinalizeHandshake:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(id /* block */)arg3;
- (void)_handleInviteRequest:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(id /* block */)arg3;
- (void)_handleInviteResponse:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(id /* block */)arg3;
- (void)_handleMessage:(id)arg1 identifier:(id)arg2;
- (void)_handleMessageSendSuccess:(bool)arg1 error:(id)arg2 identifier:(id)arg3;
- (void)_handleWithdrawInviteRequest:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(id /* block */)arg3;
- (id)_idsIdentifierForDestination:(id)arg1;
- (id)_idsIdentifiersForDestinations:(id)arg1;
- (id)_messageHandlerForType:(int)arg1;
- (void)_processMessageQueue:(id)arg1 preprocessingBlock:(id /* block */)arg2;
- (void)_sendMessage:(id)arg1 type:(int)arg2 destinations:(id)arg3 completion:(id /* block */)arg4;
- (void)_sendPayload:(id)arg1 type:(int)arg2 destinations:(id)arg3 completion:(id /* block */)arg4;
- (void)beginReceivingMessages;
- (void)dealloc;
- (id)delegate;
- (void)endReceivingMessages;
- (id)initWithServiceIdentifier:(id)arg1;
- (void)processPersistedMessageQueue;
- (void)processRetryMessageQueue;
- (void)sendFinalizeHandshake:(id)arg1 toDestinations:(id)arg2 completion:(id /* block */)arg3;
- (void)sendInviteRequest:(id)arg1 toDestinations:(id)arg2 completion:(id /* block */)arg3;
- (void)sendInviteResponse:(id)arg1 toDestinations:(id)arg2 completion:(id /* block */)arg3;
- (void)sendSecureCloudMessagePayload:(id)arg1 type:(int)arg2 toDestinations:(id)arg3 completion:(id /* block */)arg4;
- (void)sendWithdrawInviteRequest:(id)arg1 toDestinations:(id)arg2 completion:(id /* block */)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)serviceIdentifier;
- (void)setDelegate:(id)arg1;

@end

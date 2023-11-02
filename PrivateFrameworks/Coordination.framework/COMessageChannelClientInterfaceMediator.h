
@interface COMessageChannelClientInterfaceMediator : NSObject <COMessageChannelClientInterface> {
    COMessageChannel * _messageChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COMessageChannel *messageChannel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)failedToSendRequestWithID:(unsigned int)arg1 withError:(id)arg2;
- (id)initWithMessageChannel:(id)arg1;
- (id)messageChannel;
- (void)receivedRecipientListForRequestID:(unsigned int)arg1 recipients:(id)arg2;
- (void)receivedRequestWithPayload:(id)arg1 payloadType:(id)arg2 requestID:(unsigned int)arg3 fromMember:(id)arg4 withCallback:(id /* block */)arg5;
- (void)receivedResponseForRequestID:(unsigned int)arg1 responsePayload:(id)arg2 responseType:(id)arg3 responseError:(id)arg4 fromMember:(id)arg5;

@end

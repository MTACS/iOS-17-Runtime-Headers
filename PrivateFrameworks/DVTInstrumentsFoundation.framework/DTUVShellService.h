
@interface DTUVShellService : DTXService {
    NSObject<OS_dispatch_queue> * _messageQueue;
    NSMutableArray * _queuedServiceMessages;
    <DTUVService> * _service;
    id /* block */  _serviceMessageHandler;
}

- (void).cxx_destruct;
- (void)_activateService;
- (void)_bindServiceCancelationToChannelCancelation;
- (id)_makeDTXMessageFrom:(id)arg1;
- (id /* block */)_makeDTXReplyHandlerFrom:(id)arg1;
- (id)_makeServiceMessageFrom:(id)arg1 error:(id*)arg2;
- (id /* block */)_makeServiceReplyHandlerFrom:(id)arg1;
- (void)_replyToQueuedMessages:(id)arg1;
- (id)createExternalService:(id /* block */)arg1 error:(id*)arg2;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)sendMessage:(id)arg1;

@end

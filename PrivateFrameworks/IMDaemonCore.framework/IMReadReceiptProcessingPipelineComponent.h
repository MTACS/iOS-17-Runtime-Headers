
@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDChatRegistry * _chatRegistry;
    IMDMessageStore * _messageStore;
    IMDRecentsController * _recents;
    IDSService * _service;
}

- (void).cxx_destruct;
- (void)_donateReadEventForChat:(id)arg1;
- (id)_markMessagesUpToGUID:(id)arg1 forChat:(id)arg2 isFromMe:(bool)arg3 date:(id)arg4;
- (id)initWithMessageStore:(id)arg1 chatRegistry:(id)arg2 recents:(id)arg3 IDSService:(id)arg4;
- (id)runIndividuallyWithInput:(id)arg1;

@end

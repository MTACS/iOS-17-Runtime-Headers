
@interface IMMarkUnreadRequestProcessingPipelineComponent : IMPipelineComponent {
    IMDChatRegistry * _chatRegistry;
    IMDMessageStore * _messageStore;
    IMDRecentsController * _recents;
    IDSService * _service;
}

- (void).cxx_destruct;
- (id)initWithMessageStore:(id)arg1 chatRegistry:(id)arg2 recents:(id)arg3 IDSService:(id)arg4;
- (id)runIndividuallyWithInput:(id)arg1;

@end

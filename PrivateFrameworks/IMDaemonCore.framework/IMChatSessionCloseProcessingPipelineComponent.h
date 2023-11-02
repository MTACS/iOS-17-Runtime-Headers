
@interface IMChatSessionCloseProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _account;
    IMDChatRegistry * _chatRegistry;
    IMDiMessageIDSTrustedData * _idsTrustedData;
    IMDMessageStore * _messageStore;
}

- (void).cxx_destruct;
- (id)initWithMessageStore:(id)arg1;
- (id)initWithMessageStore:(id)arg1 chatRegistry:(id)arg2 idsTrustedData:(id)arg3;
- (id)runIndividuallyWithInput:(id)arg1;

@end


@interface IMSyndicationActionProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessagePipelineResources * _pipelineResources;
}

@property (nonatomic, readonly) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_broadcaster;
- (id)_chatRegistry;
- (id)_messageStore;
- (id)findSMSChatForInput:(id)arg1;
- (id)handleChatSyndicationAction:(id)arg1 chat:(id)arg2;
- (id)handleMessageSyndicationAction:(id)arg1 chat:(id)arg2;
- (id)initWithPipelineResources:(id)arg1;
- (id)pipelineResources;
- (id)runIndividuallyWithInput:(id)arg1;

@end

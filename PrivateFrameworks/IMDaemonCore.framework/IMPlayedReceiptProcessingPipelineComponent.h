
@interface IMPlayedReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessagePipelineResources * _pipelineResources;
}

@property (nonatomic, readonly) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_idsAccount;
- (void)_markMessageAsPlayedAndNotify:(id)arg1 session:(id)arg2 chat:(id)arg3 date:(id)arg4;
- (id)_messageStore;
- (id)initWithPipelineResources:(id)arg1;
- (id)pipelineResources;
- (id)runIndividuallyWithInput:(id)arg1;

@end

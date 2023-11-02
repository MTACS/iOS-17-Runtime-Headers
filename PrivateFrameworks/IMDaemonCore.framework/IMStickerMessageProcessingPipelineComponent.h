
@interface IMStickerMessageProcessingPipelineComponent : IMAssociatedMessageProcessingPipelineComponent {
    NSDictionary * _messageSummaryAdditions;
    IMDiMessagePipelineResources * _pipelineResources;
}

@property (nonatomic, retain) NSDictionary *messageSummaryAdditions;
@property (nonatomic, readonly) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)createMessageItemWithInput:(id)arg1;
- (id)initWithPipelineResources:(id)arg1;
- (id)messageSummaryAdditions;
- (id)pipelineResources;
- (id)runIndividuallyWithInput:(id)arg1;
- (void)setMessageSummaryAdditions:(id)arg1;

@end

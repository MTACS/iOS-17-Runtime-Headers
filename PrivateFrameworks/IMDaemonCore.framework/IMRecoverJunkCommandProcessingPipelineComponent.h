
@interface IMRecoverJunkCommandProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessagePipelineResources * _pipelineResources;
}

@property (nonatomic, readonly) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)initWithPipelineResources:(id)arg1;
- (id)pipelineResources;
- (id)runIndividuallyWithInput:(id)arg1;

@end

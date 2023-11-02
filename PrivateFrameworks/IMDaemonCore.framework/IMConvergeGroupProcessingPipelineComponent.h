
@interface IMConvergeGroupProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessageIDSTrustedData * _idsTrustedData;
}

- (void).cxx_destruct;
- (id)initWithIDSTrustedData:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end

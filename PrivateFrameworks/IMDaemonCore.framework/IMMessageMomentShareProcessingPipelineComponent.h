
@interface IMMessageMomentShareProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessageIDSTrustedData * _trustedData;
}

@property (nonatomic, retain) IMDiMessageIDSTrustedData *trustedData;

- (void).cxx_destruct;
- (id)initWithTrustedData:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;
- (void)setTrustedData:(id)arg1;
- (id)trustedData;

@end

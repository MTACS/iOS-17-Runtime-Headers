
@interface IMCheckInMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _account;
}

@property (nonatomic, readonly) IMDAccount *account;

- (void).cxx_destruct;
- (id)_getURL:(id)arg1;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end

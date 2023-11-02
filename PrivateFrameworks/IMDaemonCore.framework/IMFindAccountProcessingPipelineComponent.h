
@interface IMFindAccountProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _receivingAccount;
}

@property (nonatomic, readonly) IMDAccount *receivingAccount;

- (void).cxx_destruct;
- (bool)_isSOSWithInput:(id)arg1;
- (id)initWithReceivingAccount:(id)arg1;
- (id)receivingAccount;
- (id)runIndividuallyWithInput:(id)arg1;

@end

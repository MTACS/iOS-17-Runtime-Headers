
@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _account;
    IMDMessageStore * _messageStore;
}

- (void).cxx_destruct;
- (void)_configureAccountForMessageItem:(id)arg1 input:(id)arg2;
- (unsigned long long)computeFlagsForInput:(id)arg1;
- (id)createMessageItemWithInput:(id)arg1;
- (id)initWithMessageStore:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end

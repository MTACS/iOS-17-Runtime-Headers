
@interface IMFamilySenderMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _account;
    IMDiMessageIDSTrustedData * _idsTrustedData;
}

@property (nonatomic, readonly) IMDAccount *account;
@property (nonatomic, readonly) IMDiMessageIDSTrustedData *idsTrustedData;

- (void).cxx_destruct;
- (bool)_fromFamilyMember:(id)arg1;
- (id)_generateError:(id)arg1;
- (id)account;
- (id)idsTrustedData;
- (id)initWithAccount:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end

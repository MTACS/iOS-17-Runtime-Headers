
@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {
    IDSService * _idsService;
    IMDiMessageIDSTrustedData * _idsTrustedData;
    id  _messageContext;
}

- (void).cxx_destruct;
- (bool)_shouldUpgradeExistingMessage:(id)arg1 input:(id)arg2;
- (void)_updateChatForInput:(id)arg1 hadChat:(bool)arg2;
- (id)initWithIDSTrustedData:(id)arg1 messageContext:(id)arg2 idsService:(id)arg3;
- (id)runIndividuallyWithInput:(id)arg1;

@end

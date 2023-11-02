
@interface IMJunkMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessageIDSTrustedData * _idsTrustedData;
}

@property (nonatomic, readonly) IMDiMessageIDSTrustedData *idsTrustedData;

- (void).cxx_destruct;
- (void)_trackSendEventForSender:(id)arg1 andReceiver:(id)arg2;
- (id)idsTrustedData;
- (id)initWithIDSTrustedData:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end

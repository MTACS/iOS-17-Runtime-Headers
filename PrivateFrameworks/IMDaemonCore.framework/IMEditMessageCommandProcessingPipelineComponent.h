
@interface IMEditMessageCommandProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessagePipelineResources * _pipelineResources;
}

@property (nonatomic, readonly) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_applyEditsToMessage:(id)arg1 preEditFullMessageText:(id)arg2 editType:(unsigned long long)arg3 editedPartIndex:(long long)arg4 editedMessagePartText:(id)arg5 shouldRetractSubject:(bool)arg6 editTimestamp:(id)arg7 chat:(id)arg8 updatedAssociatedMessageItems:(id*)arg9;
- (id)_idsAccount;
- (long long)_messageEditHistoryLimit;
- (double)_messageEditReceivedTimeout;
- (double)_messageRetractionReceivedTimeoutEnforcingExactTimeoutInterval:(bool)arg1;
- (id)_messageStore;
- (double)_timeoutIntervalForEditType:(unsigned long long)arg1 enforceExactRetractionTimeoutInterval:(bool)arg2;
- (id)initWithPipelineResources:(id)arg1;
- (id)pipelineResources;
- (id)runIndividuallyWithInput:(id)arg1;

@end


@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore * _messageStore;
}

- (void).cxx_destruct;
- (void)_metricMessageGUIDDelivered:(id)arg1 sendDate:(id)arg2 deliveryDate:(id)arg3;
- (id)_processDeliveryReceiptForMessageGUID:(id)arg1 date:(id)arg2;
- (id)initWithMessageStore:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end

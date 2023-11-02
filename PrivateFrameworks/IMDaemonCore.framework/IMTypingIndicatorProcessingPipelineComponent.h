
@interface IMTypingIndicatorProcessingPipelineComponent : IMTextMessageProcessingPipelineComponent

- (bool)canSuppressMessageWithInput:(id)arg1;
- (id)createMessageItemWithInput:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;

@end


@interface IMResolveFallbackHashesProcessingPipelineComponent : IMPipelineComponent

- (id)_associatedMessageGUIDForInput:(id)arg1 error:(id*)arg2;
- (id)_messageGUIDForInput:(id)arg1 providedGUID:(id)arg2 fallbackHash:(id)arg3;
- (id)_messageGUIDForMessageWithFallbackHash:(id)arg1 chat:(id)arg2;
- (id)_threadIdentifierForInput:(id)arg1 error:(id*)arg2;
- (id)runIndividuallyWithInput:(id)arg1;

@end

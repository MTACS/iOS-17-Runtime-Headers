
@protocol NRFProcessorDelegate <NSObject>

@optional

- (void)didFinishProcessingWithCompletionStatus:(NRFCompletionStatus *)arg1;
- (void)processor:(id <NRFProcessor>)arg1 didCompleteProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(id <NRFProcessor>)arg1 didEnqueueProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(id <NRFProcessor>)arg1 didSelectFusionMode:(int)arg2;
- (void)processor:(id <NRFProcessor>)arg1 didSelectProgressiveFusionReferenceFrameIndex:(int)arg2;
- (void)processor:(id <NRFProcessor>)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3 outputMetadata:(NSMutableDictionary *)arg4 error:(int)arg5;
- (NRFProcessorInferenceResults *)processorGetInferenceResults:(id <NRFProcessor>)arg1;

@end


@protocol IBPDeepFusionProcessorDelegate <NSObject>

@optional

- (void)processor:(id <ImageBufferProcessor>)arg1 didSelectFusionMode:(int)arg2;
- (void)processor:(id <ImageBufferProcessor>)arg1 outputReadyWithBufferType:(int)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3 outputMetadata:(NSMutableDictionary *)arg4 error:(int)arg5;
- (<IBPNoiseReductionProcessorInferenceResults> *)processorGetInferenceResults:(id <ImageBufferProcessor>)arg1 inferenceInputBufferType:(int)arg2;

@end

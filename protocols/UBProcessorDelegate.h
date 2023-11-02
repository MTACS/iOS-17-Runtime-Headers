
@protocol UBProcessorDelegate <NSObject>

@optional

- (void)processor:(UBProcessor *)arg1 didCompleteProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(UBProcessor *)arg1 didEnqueueProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(UBProcessor *)arg1 didSelectFusionMode:(int)arg2;
- (void)processor:(UBProcessor *)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3 outputMetadata:(NSMutableDictionary *)arg4 error:(int)arg5;
- (UBProcessorInferenceResults *)processorGetInferenceResults:(UBProcessor *)arg1;

@end


@protocol BWDeferredProcessorControllerDelegate <BWStillImageProcessorControllerDelegate>

@required

- (void)processorController:(BWDeferredProcessorController *)arg1 didDetermineReferenceFrame:(struct opaqueCMSampleBuffer { }*)arg2 processorInput:(BWDeferredProcessorControllerInput *)arg3 err:(int)arg4;
- (void)processorController:(BWDeferredProcessorController *)arg1 didFinishProcessingInference:(id)arg2 inferenceAttachmentKey:(NSString *)arg3 processorInput:(BWDeferredProcessorControllerInput *)arg4 err:(int)arg5;
- (void)processorController:(BWDeferredProcessorController *)arg1 didFinishProcessingInferenceAttachedMediaMetadata:(NSDictionary *)arg2 processorInput:(BWDeferredProcessorControllerInput *)arg3;
- (void)processorController:(BWDeferredProcessorController *)arg1 didFinishProcessingInferenceBuffer:(struct __CVBuffer { }*)arg2 inferenceAttachedMediaKey:(NSString *)arg3 processorInput:(BWDeferredProcessorControllerInput *)arg4 err:(int)arg5;

@end

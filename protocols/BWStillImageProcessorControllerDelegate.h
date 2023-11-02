
@protocol BWStillImageProcessorControllerDelegate <NSObject>

@required

- (void)processorController:(BWStillImageProcessorController *)arg1 didFinishProcessingInput:(BWStillImageProcessorControllerInput *)arg2 err:(int)arg3;
- (void)processorController:(BWStillImageProcessorController *)arg1 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 type:(unsigned long long)arg3 processorInput:(BWStillImageProcessorControllerInput *)arg4 err:(int)arg5;
- (struct __CVBuffer { }*)processorController:(BWStillImageProcessorController *)arg1 newOutputPixelBufferForProcessorInput:(BWStillImageProcessorControllerInput *)arg2 type:(unsigned long long)arg3;

@optional

- (void)processorController:(BWStillImageProcessorController *)arg1 didFinishProcessingBuffer:(struct __CVBuffer { }*)arg2 metadata:(NSDictionary *)arg3 type:(unsigned long long)arg4 captureFrameFlags:(unsigned long long)arg5 processorInput:(BWStillImageProcessorControllerInput *)arg6 err:(int)arg7;
- (void)processorController:(BWStillImageProcessorController *)arg1 didSelectFusionMode:(int)arg2 processorInput:(BWStillImageProcessorControllerInput *)arg3;
- (BWStillImageInferences *)processorController:(BWStillImageProcessorController *)arg1 newInferencesForProcessorInput:(BWStillImageProcessorControllerInput *)arg2;
- (BWStillImageInferences *)processorController:(BWStillImageProcessorController *)arg1 newInferencesForProcessorInput:(BWStillImageProcessorControllerInput *)arg2 inferenceInputBufferType:(unsigned long long)arg3;
- (struct __CVBuffer { }*)processorController:(BWStillImageProcessorController *)arg1 newOutputPixelBufferForProcessorInput:(BWStillImageProcessorControllerInput *)arg2 type:(unsigned long long)arg3 attachedMediaKey:(NSString *)arg4;
- (struct __CVBuffer { }*)processorController:(BWStillImageProcessorController *)arg1 newOutputPixelBufferForProcessorInput:(BWStillImageProcessorControllerInput *)arg2 type:(unsigned long long)arg3 dimensions:(struct { int x1; int x2; })arg4;
- (void)processorController:(BWStillImageProcessorController *)arg1 willAddBuffer:(struct __CVBuffer { }*)arg2 metadata:(NSMutableDictionary *)arg3 bufferType:(unsigned long long)arg4 processorInput:(BWStillImageProcessorControllerInput *)arg5;
- (void)processorController:(BWStillImageProcessorController *)arg1 willAddSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 processorInput:(BWStillImageProcessorControllerInput *)arg3;
- (void)processorControllerWillProcessInferences:(BWStillImageProcessorController *)arg1;

@end

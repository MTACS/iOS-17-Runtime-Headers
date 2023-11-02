
@interface BWSubjectRelightingCalculator : NSObject <BWInferenceEngineControllerDelegate, BWInferencePixelBufferPoolProvider> {
    NSObject<OS_dispatch_queue> * _calculationQueue;
    BWInferenceEngineController * _inferenceController;
    NSDictionary * _inferenceOutputPoolsByAttachedMediaKey;
    BWPhotoDecompressor * _jpegDecompressor;
    FigMetalContext * _metalContext;
    NSObject<OS_dispatch_queue> * _prepareQueue;
    bool  _startedPrepare;
    SubjectRelightingStage * _subjectRelightingStage;
    bool  _waitedForPrepare;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)prepareForVideoFormatAsync:(id)arg1;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (void)processorController:(id)arg1 didFinishProcessingInput:(id)arg2 err:(int)arg3;
- (void)processorController:(id)arg1 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 type:(unsigned long long)arg3 processorInput:(id)arg4 err:(int)arg5;
- (struct __CVBuffer { }*)processorController:(id)arg1 newOutputPixelBufferForProcessorInput:(id)arg2 type:(unsigned long long)arg3;
- (id)startCalculationWithJPEGSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageRequestSettings:(id)arg2 stillImageCaptureSettings:(id)arg3;

@end

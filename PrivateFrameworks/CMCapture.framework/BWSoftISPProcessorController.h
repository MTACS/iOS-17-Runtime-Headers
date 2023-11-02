
@interface BWSoftISPProcessorController : BWStillImageProcessorController <BWSoftISPProcessorControllerInputUpdatesDelegate, SoftISPProcessorDelegate> {
    NSMutableDictionary * _digitalFlashAWBMetadata;
    double  _digitalFlashLTMExposureTime;
    float  _digitalFlashLTMGain;
    NSMutableDictionary * _digitalFlashLTMMetadata;
    struct opaqueCMFormatDescription { } * _flashLSCFormatDescription;
    struct opaqueCMFormatDescription { } * _inputFormatDescription;
    struct opaqueCMFormatDescription { } * _lscFormatDescription;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    SoftISPPrepareDescriptor * _prepareDescriptor;
    SoftISPProcessor * _processor;
    NSDictionary * _sensorIDByPortType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)usesCustomProcessingFlow;

- (unsigned int)auxiliaryPixelFormatForInput:(id)arg1;
- (void)dealloc;
- (id)externalMemoryDescriptor;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 addFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)metalImageBufferProcessor;
- (struct __CVBuffer { }*)newOutputAuxiliaryPixelBufferForUniqueID:(unsigned long long)arg1 pixelFormat:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (struct __CVBuffer { }*)newOutputPixelBufferForUniqueID:(unsigned long long)arg1 pixelFormat:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (void)notifyProcessInputFrameForUniqueID:(unsigned long long)arg1;
- (void)outputFrameCompleted:(id)arg1;
- (void)outputFrameEnqueueFailure:(id)arg1;
- (void)outputFrameEnqueued:(id)arg1;
- (void)outputFrameGPUFailure:(id)arg1;
- (unsigned int)outputPixelFormatForCaptureType:(int)arg1 captureFlags:(unsigned long long)arg2 processingMode:(int)arg3;
- (unsigned int)outputPixelFormatForCaptureType:(int)arg1 captureFlags:(unsigned long long)arg2 processingMode:(int)arg3 isQuadra:(bool)arg4;
- (unsigned int)outputPixelFormatForCaptureType:(int)arg1 processingMode:(int)arg2;
- (unsigned int)outputPixelFormatForInput:(id)arg1;
- (int)prepare;
- (int)process;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;

@end

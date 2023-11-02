
@interface BWSWFRProcessorController : BWStillImageProcessorController <BWSWFRProcessorControllerInputUpdatesDelegate, CMISoftwareFlashRenderingProcessorDelegate> {
    struct opaqueCMFormatDescription { } * _demosaicedRawFormatDescription;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned int  _outputPixelFormat;
    <CMISoftwareFlashRenderingProcessor> * _processor;
    int  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int outputPixelFormat;
@property (readonly) Class superclass;

+ (bool)usesCustomProcessingFlow;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 addAmbientFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)input:(id)arg1 addFlashFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)inputAddFrameFailed:(id)arg1;
- (id)metalImageBufferProcessor;
- (unsigned int)outputPixelFormat;
- (int)prepare;
- (int)process;
- (id)processorNewInferences:(id)arg1;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;

@end

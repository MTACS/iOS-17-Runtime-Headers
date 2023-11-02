
@interface CaptureMTLFXSpatialScaler : NSObject <CaptureMTLObject, MTLFXSpatialScalerSPI> {
    <MTLFXSpatialScalerSPI> * _baseObject;
    CaptureMTLTexture * _captureColorTexture;
    CaptureMTLTexture * _captureDebugTexture;
    CaptureMTLDevice * _captureDevice;
    CaptureMTLFence * _captureFence;
    CaptureMTLTexture * _captureOutputTexture;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLFXSpatialScaler> *baseObject;
@property (nonatomic, readonly) long long colorProcessingMode;
@property (nonatomic, retain) <MTLTexture> *colorTexture;
@property (nonatomic, readonly) unsigned long long colorTextureFormat;
@property (nonatomic, readonly) unsigned long long colorTextureUsage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MTLTexture> *debugTexture;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTLFence> *fence;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inputContentHeight;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic, readonly) unsigned long long inputHeight;
@property (nonatomic, readonly) unsigned long long inputWidth;
@property (nonatomic, readonly) unsigned long long outputHeight;
@property (nonatomic, retain) <MTLTexture> *outputTexture;
@property (nonatomic, readonly) unsigned long long outputTextureFormat;
@property (nonatomic, readonly) unsigned long long outputTextureUsage;
@property (nonatomic, readonly) unsigned long long outputWidth;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (long long)colorProcessingMode;
- (id)colorTexture;
- (unsigned long long)colorTextureFormat;
- (unsigned long long)colorTextureUsage;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)debugTexture;
- (id)description;
- (void)encodeToCommandBuffer:(id)arg1;
- (void)encodeToCommandQueue:(id)arg1;
- (id)fence;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (unsigned long long)inputContentHeight;
- (unsigned long long)inputContentWidth;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (id)originalObject;
- (unsigned long long)outputHeight;
- (id)outputTexture;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputTextureUsage;
- (unsigned long long)outputWidth;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setColorTexture:(id)arg1;
- (void)setDebugTexture:(id)arg1;
- (void)setFence:(id)arg1;
- (void)setInputContentHeight:(unsigned long long)arg1;
- (void)setInputContentWidth:(unsigned long long)arg1;
- (void)setOutputTexture:(id)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end


@interface JFXVideoDecoderInterface : NSObject {
    NSObject<OS_dispatch_semaphore> * _frameSemaphore;
    struct __CVBuffer { } * _imageBuffer;
    struct OpaqueVTDecompressionSession { } * _session;
    double  m_expectedFrameRate;
}

@property (retain) NSObject<OS_dispatch_semaphore> *frameSemaphore;
@property struct __CVBuffer { }*imageBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { }*)decodeFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)frameSemaphore;
- (struct __CVBuffer { }*)imageBuffer;
- (id)init;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setFrameSemaphore:(id)arg1;
- (void)setImageBuffer:(struct __CVBuffer { }*)arg1;

@end

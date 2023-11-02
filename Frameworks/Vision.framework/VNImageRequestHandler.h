
@interface VNImageRequestHandler : NSObject {
    VNImageBuffer * _imageBuffer;
    VNObservationsCache * _observationsCache;
    VNRequestPerformer * _requestPerformer;
    VNSession * _session;
}

@property (nonatomic, readonly) VNImageBuffer *imageBuffer;
@property (nonatomic, readonly) VNSession *session;

+ (void)forcedCleanup;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)debugQuickLookObject;
- (id)imageBuffer;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 session:(id)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 options:(id)arg2 session:(id)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4 session:(id)arg5;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 options:(id)arg2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 options:(id)arg2 session:(id)arg3;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 depthData:(id)arg2 orientation:(unsigned int)arg3 options:(id)arg4 session:(id)arg5;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 session:(id)arg3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2 session:(id)arg3;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithSession:(id)arg1 imageBuffer:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 session:(id)arg3;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (bool)performRequests:(id)arg1 error:(id*)arg2;
- (bool)performRequests:(id)arg1 gatheredForensics:(id*)arg2 error:(id*)arg3;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (id)session;

@end

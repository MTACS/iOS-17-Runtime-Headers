
@interface VNSequenceRequestHandler : NSObject {
    VNRequestPerformer * _requestPerformer;
    VNSession * _session;
}

@property (nonatomic, readonly) VNSession *session;

+ (void)forcedCleanup;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_performRequests:(id)arg1 onImageBuffer:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1;
- (bool)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5;
- (bool)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5;
- (bool)performRequests:(id)arg1 onCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5;
- (bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer { }*)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (id)session;

@end

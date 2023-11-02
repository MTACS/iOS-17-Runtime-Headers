
@interface VNTargetedImageRequest : VNImageBasedRequest {
    VNImageBuffer * _targetedImageBuffer;
}

+ (Class)configurationClass;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTargetedCIImage:(id)arg1 options:(id)arg2;
- (id)initWithTargetedCIImage:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 options:(id)arg2;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTargetedImageBuffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTargetedImageData:(id)arg1 options:(id)arg2;
- (id)initWithTargetedImageData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedImageData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedImageData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedImageData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTargetedImageURL:(id)arg1 options:(id)arg2;
- (id)initWithTargetedImageURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithTargetedImageURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)newDuplicateInstance;
- (id)requiredTargetedImageBufferReturningError:(id*)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)targetedImageBuffer;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end

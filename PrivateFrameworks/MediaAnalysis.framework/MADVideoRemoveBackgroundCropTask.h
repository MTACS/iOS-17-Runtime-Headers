
@interface MADVideoRemoveBackgroundCropTask : VCPMABaseTask {
    MADServiceVideoAsset * _asset;
    id /* block */  _completionHandler;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _pixelBufferPool;
    MADVideoRemoveBackgroundPreviewRequest * _previewRequest;
    id /* block */  _progressHandler;
    MADVideoRemoveBackgroundRequest * _request;
    id /* block */  _resultHandler;
    NSString * _signpostPayload;
    struct CF<OpaqueVTPixelTransferSession *> { 
        struct OpaqueVTPixelTransferSession {} *value_; 
    }  _transferSession;
}

@property (nonatomic, copy) NSString *signpostPayload;

+ (id)taskWithAsset:(id)arg1 previewRequest:(id)arg2 generationRequest:(id)arg3 cancelBlock:(id /* block */)arg4 progressHandler:(id /* block */)arg5 resultHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)cachesResources;
- (id)compressSequenceData:(id)arg1 sequenceWriter:(id)arg2 outputWidth:(unsigned long long*)arg3 outputHeight:(unsigned long long*)arg4;
- (void)dealloc;
- (id)decodeSamplesUntilTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackOutput:(id)arg2 baseTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 progress:(id)arg4 error:(id*)arg5;
- (id)decodeSettingsForTrack:(id)arg1;
- (bool)exportFutureSamples:(id)arg1 sequenceWriter:(id)arg2 progress:(id)arg3 error:(id*)arg4;
- (bool)exportPastSamples:(id)arg1 sequenceWriter:(id)arg2 progress:(id)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)generateMaskForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithAsset:(id)arg1 previewRequest:(id)arg2 generationRequest:(id)arg3 cancelBlock:(id /* block */)arg4 progressHandler:(id /* block */)arg5 resultHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (bool)isAnimatedStickerPreferredWithPastSamples:(id)arg1 futureSamples:(id)arg2;
- (bool)isCanceled;
- (id)processFutureSamplesFromTrackOutput:(id)arg1 baseTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 orientation:(unsigned int)arg3 maskSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 maskPixelBuffer:(struct __CVBuffer { }*)arg5 cropUnion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg7 progress:(id)arg8 error:(id*)arg9;
- (id)processPastSampleBuffers:(id)arg1 orientation:(unsigned int)arg2 maskPixelBuffer:(struct __CVBuffer { }*)arg3 cropUnion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 progress:(id)arg5 error:(id*)arg6;
- (void)publishPayloadWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 data:(id)arg3;
- (void)publishPreviewResultsTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 pastSamples:(id)arg2 futureSamples:(id)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)run:(id*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaleNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;
- (bool)validateRequest:(id*)arg1;

@end

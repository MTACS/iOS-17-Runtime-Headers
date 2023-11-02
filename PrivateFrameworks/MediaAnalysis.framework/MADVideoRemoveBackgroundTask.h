
@interface MADVideoRemoveBackgroundTask : MADServiceVideoProcessingSubtask {
    MADServiceVideoAsset * _asset;
    NSError * _asyncError;
    NSObject<OS_dispatch_group> * _asyncGroup;
    NSObject<OS_dispatch_queue> * _asyncQueue;
    NSObject<OS_dispatch_semaphore> * _asyncSemaphore;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _asyncStatus;
    id /* block */  _completionHandler;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _pixelBufferPool;
    id /* block */  _progressHandler;
    MADVideoRemoveBackgroundRequest * _request;
    struct CF<OpaqueVTPixelTransferSession *> { 
        struct OpaqueVTPixelTransferSession {} *value_; 
    }  _transferSession;
}

+ (bool)trimEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compressSequenceData:(id)arg1 sequenceWriter:(id)arg2 outputWidth:(unsigned long long*)arg3 outputHeight:(unsigned long long*)arg4;
- (struct __CVBuffer { }*)convertPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (id)decodeSamplesUntilTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackOutput:(id)arg2 baseTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 progress:(id)arg4 error:(id*)arg5;
- (id)decodeSettingsForTrack:(id)arg1;
- (bool)exportPastSamples:(id)arg1 sequenceWriter:(id)arg2 progress:(id)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)generateMaskForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 error:(id*)arg3;
- (void)getOutputWidth:(unsigned long long*)arg1 outputHeight:(unsigned long long*)arg2;
- (id)initWithRequest:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (bool)isCanceled;
- (bool)processFutureSamplesFromTrackOutput:(id)arg1 baseTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 orientation:(unsigned int)arg3 maskSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 maskPixelBuffer:(struct __CVBuffer { }*)arg5 sequenceWriter:(id)arg6 progress:(id)arg7 error:(id*)arg8;
- (id)processPastSampleBuffers:(id)arg1 orientation:(unsigned int)arg2 maskPixelBuffer:(struct __CVBuffer { }*)arg3 progress:(id)arg4 error:(id*)arg5;
- (bool)run:(id*)arg1;
- (void)setAsyncError:(id)arg1;
- (bool)validateRequest:(id*)arg1;

@end

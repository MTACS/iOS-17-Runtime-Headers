
@interface MADHEVCAlphaSequenceWriter : MADAlphaSequenceWriter {
    AVAsset * _asset;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    NSObject<OS_dispatch_semaphore> * _dequeueSemaphore;
    NSObject<OS_dispatch_semaphore> * _enqueueSemaphore;
    AVAssetWriterInput * _input;
    NSMutableArray * _sampleQueue;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _status;
    NSURL * _url;
    AVAssetWriter * _writer;
}

+ (id)assetWriterWithURL:(id)arg1;

- (void).cxx_destruct;
- (int)addPixelBuffer:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)createAssetWriterInputWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)dealloc;
- (id)finishWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithFrameCount:(unsigned long long)arg1;
- (struct opaqueCMSampleBuffer { }*)popSample;
- (void)processMediaRequest;
- (void)pushSample:(struct opaqueCMSampleBuffer { }*)arg1;

@end

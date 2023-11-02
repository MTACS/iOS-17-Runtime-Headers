
@interface VCPVideoProcessor : NSObject <VCPBlockBasedVideoProcessorProtocol> {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    NSDictionary * _decoderSettings;
    id /* block */  _progressHandler;
    bool  _requiresSyncFrameDetectionFromNalUnit;
    VCPVideoProcessorSession * _session;
    VCPVideoSyncFrameDecoder * _syncFrameDecoder;
    NSURL * _url;
    double  _videoDuration;
}

@property (nonatomic, retain) NSDictionary *decoderSettings;
@property (copy) id /* block */ progressHandler;
@property (nonatomic, readonly) double videoDuration;

- (void).cxx_destruct;
- (bool)_analyzeWithStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (bool)addFrameProcessingRequest:(id /* block */)arg1 withConfiguration:(id)arg2 error:(id*)arg3;
- (bool)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3;
- (bool)analyzeWithError:(id*)arg1;
- (bool)analyzeWithStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (void)cancel;
- (id)decoderSettings;
- (id)initWithURL:(id)arg1;
- (id /* block */)progressHandler;
- (bool)removeRequest:(id)arg1 error:(id*)arg2;
- (void)setDecoderSettings:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (double)videoDuration;

@end

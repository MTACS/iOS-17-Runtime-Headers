
@interface VCPBlastdoorVideoProcessor : NSObject <VCPBlockBasedVideoProcessorProtocol> {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    NSDictionary * _decoderSettings;
    NSMutableArray * _frameProcessors;
    id /* block */  _progressHandler;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _stopProcessing;
    NSURL * _url;
}

@property (nonatomic, retain) NSDictionary *decoderSettings;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (bool)addFrameProcessingRequest:(id /* block */)arg1 withConfiguration:(id)arg2 error:(id*)arg3;
- (bool)analyzeWithError:(id*)arg1;
- (void)cancel;
- (id)decoderSettings;
- (id)initWithURL:(id)arg1;
- (bool)processConfiguration:(id)arg1 withError:(id*)arg2;
- (id /* block */)progressHandler;
- (void)setDecoderSettings:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end

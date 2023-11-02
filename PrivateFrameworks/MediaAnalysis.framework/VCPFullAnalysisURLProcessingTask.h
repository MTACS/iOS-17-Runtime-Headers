
@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol> {
    unsigned long long  _analysisTypes;
    NSURL * _assetURL;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancel;
    id /* block */  _completionHandler;
    bool  _noResultStrip;
    NSDictionary * _options;
    NSURL * _pairedAssetURL;
    id /* block */  _progressHandler;
}

+ (id)taskForURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (id)initWithURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (float)resourceRequirement;
- (int)run;
- (int)runWithCancelBlock:(id /* block */)arg1;

@end

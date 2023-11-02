
@interface VCPFullAnalysisAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    bool  _allowOnDemand;
    bool  _allowStreaming;
    unsigned long long  _analysisTypes;
    NSArray * _assets;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancel;
    id /* block */  _completionHandler;
    VCPDatabaseReader * _database;
    NSDictionary * _options;
    PHPhotoLibrary * _photoLibrary;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _started;
}

+ (bool)AllowPersistSettlingEffectScore;
+ (id)taskWithAsset:(id)arg1 andAnalysisTypes:(unsigned long long)arg2 andOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 withExistingAnalysis:(id)arg3 error:(id*)arg4;
- (bool)autoCancellable;
- (void)cancel;
- (void)dealloc;
- (id)initWithAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 options:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)main;
- (id)requestAnalysis:(unsigned long long)arg1 forAsset:(id)arg2 andDatabase:(id)arg3 error:(id*)arg4;
- (float)resourceRequirement;
- (int)run;

@end

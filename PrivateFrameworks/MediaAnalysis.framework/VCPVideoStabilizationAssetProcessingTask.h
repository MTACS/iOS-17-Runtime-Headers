
@interface VCPVideoStabilizationAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    NSArray * _assets;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancel;
    id /* block */  _completionHandler;
    VCPDatabaseReader * _database;
    bool  _onDemandGyro;
    bool  _onDemandPixel;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _stabilizationType;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _started;
}

+ (bool)deserializeStabilizationRecipeInAttributes:(id)arg1;
+ (id)taskWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (void)dealloc;
- (id)initWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (int)main;
- (float)resourceRequirement;
- (int)run;

@end

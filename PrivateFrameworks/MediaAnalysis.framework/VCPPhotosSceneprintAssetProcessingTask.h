
@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    NSArray * _assets;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancel;
    id /* block */  _completionHandler;
    unsigned long long  _revision;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _started;
}

+ (unsigned long long)_panoVNRequestMethod;
+ (id)taskWithAssets:(id)arg1 options:(id)arg2 andCompletionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (void)dealloc;
- (id)initWithAssets:(id)arg1 options:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (float)resourceRequirement;
- (int)run;
- (bool)run:(id*)arg1;

@end

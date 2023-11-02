
@interface VCPMADVIMachineReadableCodeDetectionTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    NSObject<OS_dispatch_queue> * _cancelQueue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    VCPMADServiceImageAsset * _imageAsset;
    MADVIMachineReadableCodeDetectionRequest * _request;
    NSString * _signpostPayload;
    VNImageBasedRequest * _weakRequest;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (bool)canReuseResultsForRequest;
- (void)cancel;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (float)resourceRequirement;
- (int)run;

@end

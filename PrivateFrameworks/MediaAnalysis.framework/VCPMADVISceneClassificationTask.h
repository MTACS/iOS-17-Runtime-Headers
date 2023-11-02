
@interface VCPMADVISceneClassificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    NSObject<OS_dispatch_queue> * _cancelQueue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    VCPMADServiceImageAsset * _imageAsset;
    <MTLDevice> * _preferredMetalDevice;
    MADVISceneClassificationRequest * _request;
    NSString * _signpostPayload;
    VNImageBasedRequest * _weakClassificationRequest;
    VNImageBasedRequest * _weakNSFWRequest;
    VNImageBasedRequest * _weakRecognizedObjectsRequest;
    VNImageBasedRequest * _weakSaliencyRequest;
    VNImageBasedRequest * _weakSignificantEventRequest;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (void)configureRequest:(id)arg1;
- (void)configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (float)resourceRequirement;
- (int)run;
- (void)setPreferredMetalDevice:(id)arg1;

@end

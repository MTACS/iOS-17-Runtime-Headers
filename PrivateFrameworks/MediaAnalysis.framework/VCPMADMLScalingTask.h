
@interface VCPMADMLScalingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    VCPMADServiceImageAsset * _imageAsset;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _outputPixelBufferPool;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _pixelBufferPool;
    MADMLScalingRequest * _request;
    NSString * _signpostPayload;
    struct CF<OpaqueVTPixelTransferSession *> { 
        struct OpaqueVTPixelTransferSession {} *value_; 
    }  _transferSession;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (int)convertPixelFormat:(struct __CVBuffer {}**)arg1;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (float)resourceRequirement;
- (int)run;

@end

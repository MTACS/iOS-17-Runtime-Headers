
@interface VCPMADImageSafetyClassificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    VCPMADServiceImageAsset * _imageAsset;
    MADImageSafetyClassificationRequest * _request;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
    NSString * _signpostPayload;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (int)createUprightPixelBuffer:(struct __CVBuffer {}**)arg1 fromSourceBuffer:(struct __CVBuffer { }*)arg2 andOrientation:(unsigned int)arg3;
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;
- (void)logMemoryWithMessage:(id)arg1;
- (float)resourceRequirement;
- (int)run;

@end

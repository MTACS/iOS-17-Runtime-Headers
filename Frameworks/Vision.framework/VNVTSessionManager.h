
@interface VNVTSessionManager : NSObject {
    unsigned long long  _maxSessionsCount;
    struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { 
        struct __compressed_pair<SessionsHandler<VNVTPixelRotationSession> *, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { 
            void *__value_; 
        } __ptr_; 
    }  _pixelRotationSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { 
        struct __compressed_pair<SessionsHandler<VNVTPixelTransferSession> *, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { 
            void *__value_; 
        } __ptr_; 
    }  _pixelTransferSessionsHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end

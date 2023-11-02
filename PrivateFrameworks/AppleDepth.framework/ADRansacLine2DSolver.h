
@interface ADRansacLine2DSolver : NSObject {
    struct unique_ptr<DisparityToDepth::RansacLine2DModel, std::default_delete<DisparityToDepth::RansacLine2DModel>> { 
        struct __compressed_pair<DisparityToDepth::RansacLine2DModel *, std::default_delete<DisparityToDepth::RansacLine2DModel>> { 
            struct RansacLine2DModel {} *__value_; 
        } __ptr_; 
    }  _model2D;
    struct unique_ptr<DisparityToDepth::Ransac<float, float>, std::default_delete<DisparityToDepth::Ransac<float, float>>> { 
        struct __compressed_pair<DisparityToDepth::Ransac<float, float> *, std::default_delete<DisparityToDepth::Ransac<float, float>>> { 
            void *__value_; 
        } __ptr_; 
    }  _solver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fitWithX:(float*)arg1 y:(float*)arg2 count:(unsigned int)arg3;
- (id)initWithParameters:(id)arg1;

@end


@interface ADRansacLine1DSolver : NSObject {
    struct unique_ptr<DisparityToDepth::RansacLineModel, std::default_delete<DisparityToDepth::RansacLineModel>> { 
        struct __compressed_pair<DisparityToDepth::RansacLineModel *, std::default_delete<DisparityToDepth::RansacLineModel>> { 
            struct RansacLineModel {} *__value_; 
        } __ptr_; 
    }  _model1D;
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

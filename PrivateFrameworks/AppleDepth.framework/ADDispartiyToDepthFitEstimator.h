
@interface ADDispartiyToDepthFitEstimator : NSObject {
    unsigned int  _estimateWithDisparityCounter;
    struct unique_ptr<DisparityToDepth::DisparityToDepthFitEstimator, std::default_delete<DisparityToDepth::DisparityToDepthFitEstimator>> { 
        struct __compressed_pair<DisparityToDepth::DisparityToDepthFitEstimator *, std::default_delete<DisparityToDepth::DisparityToDepthFitEstimator>> { 
            struct DisparityToDepthFitEstimator {} *__value_; 
        } __ptr_; 
    }  _impl;
    ADLogManager * _logger;
    unsigned int  _updateWorldPointsCounter;
    struct vector<ADDisparityToDepthFitWorldPoint, std::allocator<ADDisparityToDepthFitWorldPoint>> { 
        struct ADDisparityToDepthFitWorldPoint {} *__begin_; 
        struct ADDisparityToDepthFitWorldPoint {} *__end_; 
        struct __compressed_pair<ADDisparityToDepthFitWorldPoint *, std::allocator<ADDisparityToDepthFitWorldPoint>> { 
            struct ADDisparityToDepthFitWorldPoint {} *__value_; 
        } __end_cap_; 
    }  _worldPoints;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _x;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _y;
}

@property (nonatomic, retain) ADLogManager *logger;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)estimateWithDisparity:(struct __CVBuffer { }*)arg1 calibration:(id)arg2 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 disparityTimestamp:(double)arg4;
- (id)estimateWithDisparityFile:(id)arg1 disparityWidth:(unsigned int)arg2 disparityHeight:(unsigned int)arg3 calibration:(id)arg4 poseArray:(id)arg5 disparityTimestamp:(double)arg6;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)logger;
- (id)queryIntermediateResults;
- (void)setLogger:(id)arg1;
- (void)updateWorldPoints:(struct ADDisparityToDepthFitWorldPoint { float x1; int x2; }*)arg1 pointCount:(unsigned int)arg2 pointsTimestamp:(double)arg3;
- (void)updateWorldPointsArray:(id)arg1 pointsTimestamp:(double)arg2;

@end

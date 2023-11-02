
@interface ABPK2DExtrapolationFiltering : NSObject {
    ABPK2DDetectionResult * _aligned3DSkeleton;
    struct SkeletonJointFilter<float> { 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } m_values; 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } m_speed; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } m_timestamps; 
        float m_smoothing; 
        float m_lowest_threshold; 
        float m_low_threshold; 
        float m_high_threshold; 
        float m_highest_threshold; 
        float m_temporal_smoothing; 
        float m_prediction_factor; 
        float m_min_smoothing; 
        float m_up_slope; 
        float m_down_slope; 
        float m_temporal_slope; 
    }  _extrapolationFilter2D;
    struct SkeletonJointFilter<float> { 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } m_values; 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } m_speed; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } m_timestamps; 
        float m_smoothing; 
        float m_lowest_threshold; 
        float m_low_threshold; 
        float m_high_threshold; 
        float m_highest_threshold; 
        float m_temporal_smoothing; 
        float m_prediction_factor; 
        float m_min_smoothing; 
        float m_up_slope; 
        float m_down_slope; 
        float m_temporal_slope; 
    }  _extrapolationFilter2DForLiftingData;
    double  _extrapolationTime;
    struct __wrap_iter<const abpk::Human *> { 
        struct Human {} *__i_; 
    }  _iteratorToTrackedInstance;
    unsigned long long  _lastANSTTrackedInstanceId;
    double  _lastANSTTrackedInstanceIdTime;
    struct Human { 
        struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {} keypoints; 
    }  _rawTrackedHuman;
    struct vector<abpk::Human, std::allocator<abpk::Human>> { 
        struct Human {} *__begin_; 
        struct Human {} *__end_; 
        struct __compressed_pair<abpk::Human *, std::allocator<abpk::Human>> { 
            struct Human {} *__value_; 
        } __end_cap_; 
    }  _rawTrackedHumanVector;
    bool  _shouldPush3DSupportSkeleton;
    struct Human { 
        struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {} keypoints; 
    }  _trackedHuman;
    struct Human { 
        struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {} keypoints; 
    }  _trackedHumanForLifting;
    bool  _use3DSupportSkeletonForExtrapolation;
}

@property (nonatomic, readonly) ABPK2DDetectionResult *aligned3DSkeleton;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Human { struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>=^ {} x1; })_getTrackedHumanForHumans:(struct vector<abpk::Human, std::allocator<abpk::Human>> { struct Human {} *x1; struct Human {} *x2; struct __compressed_pair<abpk::Human *, std::allocator<abpk::Human>> { struct Human {} *x_3_1_1; } x3; })arg1 atTimestamp:(double)arg2 withImageResolution:(struct CGSize { double x1; double x2; })arg3;
- (struct Human { struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>=^ {} x1; })_getTrackedHumanForHumans:(struct vector<abpk::Human, std::allocator<abpk::Human>> { struct Human {} *x1; struct Human {} *x2; struct __compressed_pair<abpk::Human *, std::allocator<abpk::Human>> { struct Human {} *x_3_1_1; } x3; })arg1 atTimestamp:(double)arg2 withImageResolution:(struct CGSize { double x1; double x2; })arg3 withPersonTracker:(id)arg4;
- (id)aligned3DSkeleton;
- (id)initWithUse3DSkeletonForExtrapolation:(bool)arg1 shouldPush3DSupportSkeleton:(bool)arg2 withExtrapolationTime:(double)arg3;
- (int)performExtrapolationOnHumans:(struct vector<abpk::Human, std::allocator<abpk::Human>> { struct Human {} *x1; struct Human {} *x2; struct __compressed_pair<abpk::Human *, std::allocator<abpk::Human>> { struct Human {} *x_3_1_1; } x3; })arg1 withImageResolution:(struct CGSize { double x1; double x2; })arg2 atTimestamp:(double)arg3 rotationNeeded:(long long)arg4 previousSkeleton3D:(id)arg5;
- (int)performExtrapolationOnHumans:(struct vector<abpk::Human, std::allocator<abpk::Human>> { struct Human {} *x1; struct Human {} *x2; struct __compressed_pair<abpk::Human *, std::allocator<abpk::Human>> { struct Human {} *x_3_1_1; } x3; })arg1 withImageResolution:(struct CGSize { double x1; double x2; })arg2 atTimestamp:(double)arg3 rotationNeeded:(long long)arg4 previousSkeleton3D:(id)arg5 personTracker:(id)arg6;
- (const void*)rawTrackedHuman;
- (const void*)rawTrackedHumanVector;
- (const void*)trackedHuman;
- (const void*)trackedHumanForLifting;

@end


@interface RSScanCoaching : NSObject {
    RSTextCoachingSignal * _ceiling_signal;
    struct DistanceCoaching { 
        float _threshold; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _score_queue; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _smooth_queue; 
        float _latest_meand; 
        struct CoachingModel { 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _w1; 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _b1; 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _w2; 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _b2; 
        } _model; 
    }  _distance;
    bool  _enableOnboarding;
    NSDate * _firstCallTime;
    NSDate * _firstKeyframeTime;
    NSDate * _floorCeilingTime;
    RSTextCoachingSignal * _floor_signal;
    NSDate * _lastModelTime;
    struct vector<std::tuple<float __attribute__((ext_vector_type(3))), float __attribute__((ext_vector_type(3))), RS3DSurfaceQuad>, std::allocator<std::tuple<float __attribute__((ext_vector_type(3))), float __attribute__((ext_vector_type(3))), RS3DSurfaceQuad>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::tuple<float __attribute__((ext_vector_type(3))), float __attribute__((ext_vector_type(3))), RS3DSurfaceQuad> *, std::allocator<std::tuple<float __attribute__((ext_vector_type(3))), float __attribute__((ext_vector_type(3))), RS3DSurfaceQuad>>>="__value_"^v {}  _lastWalls;
    RSTextCoachingSignal * _last_signal;
    struct LightCoaching { 
        float _kpt_range; 
        float _threshold; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _score_queue; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _smooth_queue; 
        float _latest_mean_color; 
        float _latest_n_kpt; 
        struct CoachingModel { 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _w1; 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _b1; 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _w2; 
            struct Mat { 
                int rows; 
                int cols; 
                double *data; 
            } _b2; 
        } _model; 
    }  _light;
    unsigned long long  _maxModelFrameRate;
    struct OnboardCoaching { 
        float _v_thr1; 
        float _v_thr2; 
        float _w_thr1; 
        float _w_thr2; 
        float _brightness_thr1; 
        float _brightness_thr2; 
        float _distance_thr1; 
        float _distance_thr2; 
        float _n_kpt_thr1; 
        float _n_kpt_thr2; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _texture_score_queue; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _speed_score_queue; 
        NSDate *_firstCallTime; 
        RSTextCoachingSignal *_latest_signal; 
        float _w_v; 
        float _b_v; 
        float _w_w; 
        float _b_w; 
        float _w_brightness; 
        float _b_brightness; 
        float _w_distance; 
        float _b_distance; 
        float _w_n_kpt; 
        float _b_n_kpt; 
    }  _onboard;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _readwriteLock;
    struct SpeedCoaching { 
        float _speed_range; 
        float _proj_speed_range; 
        float _threshold; 
        struct deque<std::tuple<simd_float4x4, double>, std::allocator<std::tuple<simd_float4x4, double>>> { 
            struct __split_buffer<std::tuple<simd_float4x4, double> *, std::allocator<std::tuple<simd_float4x4, double> *>> { 
                void **__first_; 
                void **__begin_; 
                void **__end_; 
                struct __compressed_pair<std::tuple<simd_float4x4, double> **, std::allocator<std::tuple<simd_float4x4, double> *>> { 
                    void **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<std::tuple<simd_float4x4, double>>> { 
                unsigned long long __value_; 
            } __size_; 
        } _pose_queue; 
        struct deque<float, std::allocator<float>> { 
            struct __split_buffer<float *, std::allocator<float *>> { 
                float **__first_; 
                float **__begin_; 
                float **__end_; 
                struct __compressed_pair<float **, std::allocator<float *>> { 
                    float **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<float>> { 
                unsigned long long __value_; 
            } __size_; 
        } _score_queue; 
        struct deque<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__map_"{__split_buffer<float * __attribute__((ext_vector_type(2))), std::allocator<float * __attribute__((ext_vector_type(2)))>>="__first_"^^"__begin_"^^"__end_"^^"__end_cap_"{__compressed_pair<float ** __attribute__((ext_vector_type(2))), std::allocator<float * __attribute__((ext_vector_type(2)))>>="__value_"^^ {} _smooth_queue; 
    }  _speed;
    long long  _state;
    void _wallThr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

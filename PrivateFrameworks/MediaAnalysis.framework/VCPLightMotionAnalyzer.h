
@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer {
    float  _actionScore;
    float  _cameraMotionConfidences;
    float  _cameraMotionParams;
    void * _encodeAnalysis;
    unsigned long long  _flags;
    struct Frame { 
        int frame_idx_; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } timestamp_; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } ave_motion_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } org_motion_; 
        float quality_score_; 
        unsigned long long distortion_; 
        float distortion_norm_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } motion_change_; 
        unsigned int compressed_bytes_; 
        bool blur_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } acc_var_; 
        float texture_; 
        struct MotionResult { 
            float significant_values_[6]; 
            float confidence_[6]; 
            float fine_action_score_; 
            float action_score_; 
            float track_score_; 
            float rotation_angle_; 
            float subtle_motion_score_; 
            bool is_stable_; 
            int action_blocks_; 
            float action_motion_; 
            bool valid_mb_; 
            bool valid_submb_; 
            int support_size_; 
            float residual_var_; 
            float gmv_[2]; 
            struct array<float, 6UL> { 
                float __elems_[6]; 
            } motion_param_; 
            struct array<float, 6UL> { 
                float __elems_[6]; 
            } motion_param_diff_; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration_; 
            float scene_delta_; 
            float scene_delta_ratio_; 
            struct Vector<ma::Object *> { 
                struct __CFArray {} *vector_; 
            } objects_; 
            struct Vector<ma::Object *> { 
                struct __CFArray {} *vector_; 
            } detect_objects_; 
            struct Vector<ma::Object *> { 
                struct __CFArray {} *vector_; 
            } imported_objects_; 
        } motion_result_; 
        float *flow_; 
        float interestingness_; 
        float obstruction_; 
        float colorfulness_score_; 
        struct Histogram { 
            float extremities_; 
            float overexposes_; 
            int *histogram_[3]; 
            int *moments_hist_[2]; 
        } histogram_; 
    }  _frame;
    float  _motionDivScore;
    NSObject<OS_dispatch_queue> * _queue;
    struct EncodeStatsHW { int (**x1)(); bool *x2; bool *x3; struct MotionVector {} *x4; struct MotionVector {} *x5; struct MotionVector {} *x6; struct MotionVector {} *x7; unsigned short *x8; unsigned short *x9; unsigned int *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned short *x21; unsigned int x22; bool x23; bool x24; bool x25; int x26; int x27; int x28; struct OpaqueVTCompressionSession {} *x29; struct __CFData {} *x30; struct { long long x_31_1_1; int x_31_1_2; unsigned int x_31_1_3; long long x_31_1_4; } x31; int x32; int x33; bool x34; } * _stats;
    bool  _turbo;
}

@property (readonly) float actionScore;
@property (readonly) float motionDivScore;

+ (float)autoLiveMotionScore:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)actionScore;
- (void)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completion:(id /* block */)arg4;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)cameraMotionDetection:(void*)arg1;
- (int)computeMotionDivScore:(struct EncodeStats { int (**x1)(); bool *x2; bool *x3; struct MotionVector {} *x4; struct MotionVector {} *x5; struct MotionVector {} *x6; struct MotionVector {} *x7; unsigned short *x8; unsigned short *x9; unsigned int *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned short *x21; unsigned int x22; bool x23; bool x24; bool x25; int x26; int x27; }*)arg1;
- (void)dealloc;
- (int)generateThresholds:(float)arg1 withConfidences:(float)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 turbo:(bool)arg2;
- (float)motionDivScore;
- (int)prewarmWithWidth:(int)arg1 height:(int)arg2;

@end

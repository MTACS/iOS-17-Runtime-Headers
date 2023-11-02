
@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {
    VCPSceneChangeSegment * _activeSegment;
    bool  _currentStatus;
    bool  _firstFrame;
    struct FrameBuffer { 
        int frame_count_; 
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
        } buffer_[35]; 
    }  _frameBuffer;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _frameTimeRange;
    bool  _isSegmentPoint;
    float  _sceneDeltaBuffer;
    NSMutableArray * _sceneSegments;
    bool  _verbose;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ComputeSceneDelta:(void*)arg1;
- (void)PrintSegments;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (bool)decideLensSwitchPoint:(void*)arg1;
- (int)finalizeAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (bool)isSegmentPoint;
- (id)results;

@end

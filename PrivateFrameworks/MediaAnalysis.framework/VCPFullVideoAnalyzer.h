
@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {
    float  _actionScore;
    void * _encodeAnalysis;
    bool  _faceDominated;
    bool  _finalized;
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
    NSArray * _globalMotion;
    bool  _hasInterestingScene;
    struct Histogram { 
        float extremities_; 
        float overexposes_; 
        int *histogram_[3]; 
        int *moments_hist_[2]; 
    }  _idealHistogram;
    float  _interestingnessScore;
    struct IrisAnalysis { float x1; float x2; int x3; int x4; bool x5; struct __CFArray {} *x6; } * _irisAnalysis;
    bool  _isCaptureAnalysis;
    bool  _isIris;
    bool  _isSlowMo;
    bool  _isTimelapse;
    NSDictionary * _metaMotionResults;
    struct MetaDataAnalysis { bool x1; struct FrameBuffer {} *x2; struct Translation { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct Translation { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } * _metadataAnalysis;
    struct MotionFilter { struct FrameBuffer {} *x1; bool x2; bool x3; } * _motionFilter;
    VCPMotionFlowAnalyzer * _motionFlowAnalyzer;
    NSDictionary * _objectsMotion;
    void * _obstructionAnalysis;
    float  _obstructionScore;
    int  _orientation;
    void * _preencodeAnalysis;
    NSMutableDictionary * _privateResults;
    float  _qualityScore;
    void * _sceneAnalysis;
    int  _sceneType;
    VCPMotionFlowSubtleMotionAnalyzer * _subtleMotionAnalyzer;
    VCPFrameScoreFilter * _trackScoreFilter;
    float  _trackingScore;
    bool  _useMoflow;
    VCPVideoEmbeddings * _videoEmbeddings;
    VCPFrameAnalysisStats * _videoFrameAnalysis;
}

@property float actionScore;
@property (nonatomic, readonly) NSArray *globalMotion;
@property float interestingnessScore;
@property (nonatomic, readonly) NSDictionary *objectsMotion;
@property float obstructionScore;
@property float qualityScore;
@property float trackingScore;

+ (bool)enableMoflow;
+ (bool)useSceneprintInSceneAnalysis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)actionScore;
- (int)addResult:(struct __CFArray { }*)arg1 to:(id)arg2 forKey:(id)arg3 optional:(bool)arg4;
- (int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 clipRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(bool)arg3;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4 cancel:(id /* block */)arg5;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 properties:(id)arg4 flags:(unsigned long long*)arg5 cancel:(id /* block */)arg6;
- (id)clipResults:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (float)computeExposureScoreOfFrame:(void*)arg1;
- (void)dealloc;
- (float)estimateExpressionScore:(id)arg1 encodeStats:(struct EncodeStats { int (**x1)(); bool *x2; bool *x3; struct MotionVector {} *x4; struct MotionVector {} *x5; struct MotionVector {} *x6; struct MotionVector {} *x7; unsigned short *x8; unsigned short *x9; unsigned int *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned short *x21; unsigned int x22; bool x23; bool x24; bool x25; int x26; int x27; }*)arg2 frameWidth:(int)arg3 frameHeight:(int)arg4;
- (float)estimateQualityScore:(void*)arg1;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (float)getSceneSwichFrequency;
- (id)globalMotion;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 withEmbeddings:(id)arg5 isTimelapse:(bool)arg6 isIris:(bool)arg7 irisPhotoOffsetSec:(float)arg8 irisPhotoExposureSec:(float)arg9 slowMoRate:(float)arg10 faceDominated:(bool)arg11;
- (float)interestingnessScore;
- (int)isStableMetaMotion:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)objectsMotion;
- (float)obstructionScore;
- (void)prepareLivePhotoAnalysisByScenes:(id)arg1;
- (void)prepareVideoAnalysisByScenes:(id)arg1;
- (id)privateResults;
- (int)process:(int)arg1;
- (void)processAndEstimateQualityScore:(void*)arg1;
- (id)processSceneResults;
- (float)qualityScore;
- (id)results;
- (void)reviseFrameTrackScore:(void*)arg1 saliencyRegions:(id)arg2;
- (int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer { }*)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setActionScore:(float)arg1;
- (void)setInterestingnessScore:(float)arg1;
- (void)setNextCaptureFrame:(struct __CVBuffer { }*)arg1;
- (void)setObstructionScore:(float)arg1;
- (void)setQualityScore:(float)arg1;
- (void)setTrackingScore:(float)arg1;
- (float)trackingScore;

@end

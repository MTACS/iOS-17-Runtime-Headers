
@interface VGEarFrameSelector : NSObject {
    VGEarPoseDetector * _earPoseDetector;
    unsigned long long  _frameCount;
    bool  _hasPreviousLandmarks;
    NSMutableDictionary * _leftEarEnrolledYawToBoundingBox;
    VGFrameSelector * _leftEarPitchSelector;
    VGFrameSelector * _leftEarYawSelector;
    unsigned long long  _leftFrameCount;
    VGEarCaptureOptions * _options;
    unsigned long long  _previousFrameTimestampMS;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _previousLandmarksCoords;
    NSMutableDictionary * _rightEarEnrolledYawToBoundingBox;
    VGFrameSelector * _rightEarPitchSelector;
    VGFrameSelector * _rightEarYawSelector;
    unsigned long long  _rightFrameCount;
    bool  _selectionCompleted;
}

@property (nonatomic, readonly) NSMutableDictionary *leftEarEnrolledYawToBoundingBox;
@property (nonatomic, readonly) NSMutableDictionary *rightEarEnrolledYawToBoundingBox;

+ (id)defaultModelsPath;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addPoseWithCaptureData:(id)arg1;
- (id)allPoseSelectors;
- (id)currentState;
- (id)enrolledPoses;
- (float)getMotionBlurScoreFromLandmarks:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg1 isEarDetected:(bool)arg2 frameTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)init;
- (id)initWithModelsPath:(id)arg1;
- (id)initWithModelsPath:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)leftEarEnrolledPoses;
- (id)leftEarEnrolledYawToBoundingBox;
- (id)posesFromSelectors:(id)arg1;
- (id)rightEarEnrolledPoses;
- (id)rightEarEnrolledYawToBoundingBox;
- (void)writeToPath:(id)arg1;

@end

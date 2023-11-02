
@interface VCPFrameAnalysisStats : NSObject {
    float  _cameraMotionScore;
    float  _colorfulnessScore;
    NSMutableArray * _detectedFaces;
    float  _exposureScore;
    float  _faceArea;
    float  _frameExpressionScore;
    bool  _frameProcessedByFaceDetector;
    bool  _frameProcessedByHumanAnalyzer;
    bool  _frameProcessedByPetsActionAnalyzer;
    bool  _frameProcessedByVideoAnalyzer;
    float  _humanActionScore;
    float  _humanPoseScore;
    float  _interestingnessScore;
    struct array<float, 6UL> { 
        float __elems_[6]; 
    }  _motionParam;
    struct array<float, 6UL> { 
        float __elems_[6]; 
    }  _motionParamDiff;
    float  _obstructionScore;
    float  _petsActionScore;
    NSMutableArray * _petsDetections;
    bool  _subMbMotionAvailable;
    float  _subjectActionScore;
    float  _subtleMotionScore;
    VCPVideoActivityDescriptor * _videoActivityDescriptor;
}

@property (nonatomic) float cameraMotionScore;
@property (nonatomic) float colorfulnessScore;
@property (nonatomic, retain) NSMutableArray *detectedFaces;
@property (nonatomic) float exposureScore;
@property (nonatomic) float faceArea;
@property (nonatomic) float frameExpressionScore;
@property (nonatomic) bool frameProcessedByFaceDetector;
@property (nonatomic) bool frameProcessedByHumanAnalyzer;
@property (nonatomic) bool frameProcessedByPetsActionAnalyzer;
@property (nonatomic) bool frameProcessedByVideoAnalyzer;
@property (nonatomic) float humanActionScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float interestingnessScore;
@property (nonatomic) /* Warning: unhandled struct encoding: '{array<float' */ struct  motionParam; /* unknown property attribute:  6UL>=[6f]} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{array<float' */ struct  motionParamDiff; /* unknown property attribute:  6UL>=[6f]} */
@property (nonatomic) float obstructionScore;
@property (nonatomic) float petsActionScore;
@property (nonatomic, retain) NSMutableArray *petsDetections;
@property (nonatomic) bool subMbMotionAvailable;
@property (nonatomic) float subjectActionScore;
@property (nonatomic) float subtleMotionScore;
@property (nonatomic, retain) VCPVideoActivityDescriptor *videoActivityDescriptor;

- (void).cxx_destruct;
- (float)cameraMotionScore;
- (float)colorfulnessScore;
- (id)detectedFaces;
- (float)exposureScore;
- (float)faceArea;
- (float)frameExpressionScore;
- (bool)frameProcessedByFaceDetector;
- (bool)frameProcessedByHumanAnalyzer;
- (bool)frameProcessedByPetsActionAnalyzer;
- (bool)frameProcessedByVideoAnalyzer;
- (float)humanActionScore;
- (float)humanPoseScore;
- (id)init;
- (float)interestingnessScore;
- (struct array<float, 6UL> { float x1[6]; })motionParam;
- (struct array<float, 6UL> { float x1[6]; })motionParamDiff;
- (float)obstructionScore;
- (float)petsActionScore;
- (id)petsDetections;
- (void)reset;
- (void)setCameraMotionScore:(float)arg1;
- (void)setColorfulnessScore:(float)arg1;
- (void)setDetectedFaces:(id)arg1;
- (void)setExposureScore:(float)arg1;
- (void)setFaceArea:(float)arg1;
- (void)setFrameExpressionScore:(float)arg1;
- (void)setFrameProcessedByFaceDetector:(bool)arg1;
- (void)setFrameProcessedByHumanAnalyzer:(bool)arg1;
- (void)setFrameProcessedByPetsActionAnalyzer:(bool)arg1;
- (void)setFrameProcessedByVideoAnalyzer:(bool)arg1;
- (void)setHumanActionScore:(float)arg1;
- (void)setHumanPoseScore:(float)arg1;
- (void)setInterestingnessScore:(float)arg1;
- (void)setMotionParam:(struct array<float, 6UL> { float x1[6]; })arg1;
- (void)setMotionParamDiff:(struct array<float, 6UL> { float x1[6]; })arg1;
- (void)setObstructionScore:(float)arg1;
- (void)setPetsActionScore:(float)arg1;
- (void)setPetsDetections:(id)arg1;
- (void)setSubMbMotionAvailable:(bool)arg1;
- (void)setSubjectActionScore:(float)arg1;
- (void)setSubtleMotionScore:(float)arg1;
- (void)setVideoActivityDescriptor:(id)arg1;
- (bool)subMbMotionAvailable;
- (float)subjectActionScore;
- (float)subtleMotionScore;
- (id)videoActivityDescriptor;

@end

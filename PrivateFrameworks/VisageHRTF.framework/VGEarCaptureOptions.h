
@interface VGEarCaptureOptions : NSObject {
    float  _bboxVisibilityThreshold;
    NSString * _debugDataPath;
    float  _earOcclusionThreshold;
    float  _earPresenceThreshold;
    unsigned int  _imageHeight;
    unsigned int  _imageWidth;
    float  _landmarkVisibilityThreshold;
    float  _motionBlurFilterThreshold;
    float  _percentileDetectionConfidence;
    unsigned long long  _pitchCount;
    float  _pitchLimit;
    float  _pitchSensitivity;
    bool  _useMotionBlurFilter;
    bool  _writeDebugData;
    unsigned long long  _yawCount;
    float  _yawLimit;
    float  _yawSensitivity;
}

@property (nonatomic) float bboxVisibilityThreshold;
@property (nonatomic, retain) NSString *debugDataPath;
@property (nonatomic) float earOcclusionThreshold;
@property (nonatomic) float earPresenceThreshold;
@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) float landmarkVisibilityThreshold;
@property (nonatomic) float motionBlurFilterThreshold;
@property (nonatomic) float percentileDetectionConfidence;
@property (nonatomic) unsigned long long pitchCount;
@property (nonatomic) float pitchLimit;
@property (nonatomic) float pitchSensitivity;
@property (nonatomic) bool useMotionBlurFilter;
@property (nonatomic) bool writeDebugData;
@property (nonatomic) unsigned long long yawCount;
@property (nonatomic) float yawLimit;
@property (nonatomic) float yawSensitivity;

+ (float)defaultAngleSensitivity;
+ (float)defaultBboxVisibilityThreshold;
+ (float)defaultEarOcclusionThreshold;
+ (float)defaultEarPresenceThreshold;
+ (unsigned int)defaultImageHeight;
+ (unsigned int)defaultImageWidth;
+ (float)defaultLandmarkVisibilityThreshold;
+ (float)defaultMotionBlurFilterThreshold;
+ (float)defaultPercentileDetectionConfidence;
+ (id)defaultPitchAngles;
+ (unsigned long long)defaultPitchCount;
+ (float)defaultPitchLimit;
+ (bool)defaultUseMotionBlurFilter;
+ (id)defaultYawAngles;
+ (unsigned long long)defaultYawCount;
+ (float)defaultYawLimit;
+ (id)getAnglesListWithCount:(unsigned int)arg1 limit:(float)arg2;

- (void).cxx_destruct;
- (float)bboxVisibilityThreshold;
- (id)debugDataPath;
- (id)description;
- (float)earOcclusionThreshold;
- (float)earPresenceThreshold;
- (unsigned int)imageHeight;
- (unsigned int)imageWidth;
- (id)init;
- (float)landmarkVisibilityThreshold;
- (float)motionBlurFilterThreshold;
- (float)percentileDetectionConfidence;
- (unsigned long long)pitchCount;
- (float)pitchLimit;
- (float)pitchSensitivity;
- (void)setBboxVisibilityThreshold:(float)arg1;
- (void)setDebugDataPath:(id)arg1;
- (void)setEarOcclusionThreshold:(float)arg1;
- (void)setEarPresenceThreshold:(float)arg1;
- (void)setImageHeight:(unsigned int)arg1;
- (void)setImageWidth:(unsigned int)arg1;
- (void)setLandmarkVisibilityThreshold:(float)arg1;
- (void)setMotionBlurFilterThreshold:(float)arg1;
- (void)setPercentileDetectionConfidence:(float)arg1;
- (void)setPitchCount:(unsigned long long)arg1;
- (void)setPitchLimit:(float)arg1;
- (void)setPitchSensitivity:(float)arg1;
- (void)setUseMotionBlurFilter:(bool)arg1;
- (void)setWriteDebugData:(bool)arg1;
- (void)setYawCount:(unsigned long long)arg1;
- (void)setYawLimit:(float)arg1;
- (void)setYawSensitivity:(float)arg1;
- (bool)useMotionBlurFilter;
- (bool)writeDebugData;
- (unsigned long long)yawCount;
- (float)yawLimit;
- (float)yawSensitivity;

@end

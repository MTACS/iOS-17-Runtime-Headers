
@interface CMFacePose : NSObject {
    NSArray * _blendShapeWeights;
    float  _confidence;
    int  _failureCode;
    NSString * _failureDescription;
    void _gaze;
    double  _globalMachtime;
    void _leftEyePosition;
    double  _localMachtime;
    void _rightEyePosition;
    double  _roll;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rotation;
    bool  _sensorCovered;
    bool  _tooDark;
    void _translation;
}

@property (nonatomic, retain) NSArray *blendShapeWeights;
@property (nonatomic) float confidence;
@property (nonatomic) int failureCode;
@property (nonatomic) NSString *failureDescription;
@property (nonatomic) void gaze;
@property (nonatomic) double globalMachtime;
@property (nonatomic) void leftEyePosition;
@property (nonatomic) double localMachtime;
@property (nonatomic) void rightEyePosition;
@property (nonatomic) double roll;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } rotation;
@property (nonatomic) bool sensorCovered;
@property (nonatomic) bool tooDark;
@property (nonatomic) void translation;

- (id)blendShapeWeights;
- (float)confidence;
- (int)failureCode;
- (id)failureDescription;
- (void)gaze;
- (double)globalMachtime;
- (void)leftEyePosition;
- (double)localMachtime;
- (void)rightEyePosition;
- (double)roll;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })rotation;
- (bool)sensorCovered;
- (void)setBlendShapeWeights:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setFailureCode:(int)arg1;
- (void)setFailureDescription:(id)arg1;
- (void)setGaze;
- (void)setGlobalMachtime:(double)arg1;
- (void)setLeftEyePosition;
- (void)setLocalMachtime:(double)arg1;
- (void)setRightEyePosition;
- (void)setRoll:(double)arg1;
- (void)setRotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setSensorCovered:(bool)arg1;
- (void)setTooDark:(bool)arg1;
- (void)setTranslation;
- (bool)tooDark;
- (void)translation;

@end


@interface VGFrameSelectorOptions : NSObject {
    NSArray * _angles;
    bool  _detectFrontPose;
    float  _frameAngularLimit;
    NSArray * _frontExpressionFilters;
    float  _simpleSelectorMaxOffsetAngle;
    float  _simpleSelectorMinOffsetAngle;
    bool  _useSimpleSelector;
}

@property (nonatomic, retain) NSArray *angles;
@property (nonatomic) bool detectFrontPose;
@property (nonatomic) float frameAngularLimit;
@property (nonatomic, retain) NSArray *frontExpressionFilters;
@property (nonatomic) float simpleSelectorMaxOffsetAngle;
@property (nonatomic) float simpleSelectorMinOffsetAngle;
@property (nonatomic) bool useSimpleSelector;

- (void).cxx_destruct;
- (id)angles;
- (bool)detectFrontPose;
- (float)frameAngularLimit;
- (id)frontExpressionFilters;
- (void)setAngles:(id)arg1;
- (void)setDetectFrontPose:(bool)arg1;
- (void)setFrameAngularLimit:(float)arg1;
- (void)setFrontExpressionFilters:(id)arg1;
- (void)setSimpleSelectorMaxOffsetAngle:(float)arg1;
- (void)setSimpleSelectorMinOffsetAngle:(float)arg1;
- (void)setUseSimpleSelector:(bool)arg1;
- (float)simpleSelectorMaxOffsetAngle;
- (float)simpleSelectorMinOffsetAngle;
- (bool)useSimpleSelector;

@end

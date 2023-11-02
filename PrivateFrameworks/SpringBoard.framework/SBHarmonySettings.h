
@interface SBHarmonySettings : PTSettings {
    bool  _whitePointAdaptationInteractiveUpdateEnabled;
    NSString * _whitePointAdaptationInteractiveUpdateTimingFunctionName;
    float  _whitePointAdaptationStrengthGame;
    float  _whitePointAdaptationStrengthPhoto;
    float  _whitePointAdaptationStrengthReading;
    float  _whitePointAdaptationStrengthStandard;
    float  _whitePointAdaptationStrengthVideo;
    float  _whitePointAdaptationUpdateDefaultDuration;
}

@property (nonatomic) bool whitePointAdaptationInteractiveUpdateEnabled;
@property (nonatomic, copy) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName;
@property (nonatomic) float whitePointAdaptationStrengthGame;
@property (nonatomic) float whitePointAdaptationStrengthPhoto;
@property (nonatomic) float whitePointAdaptationStrengthReading;
@property (nonatomic) float whitePointAdaptationStrengthStandard;
@property (nonatomic) float whitePointAdaptationStrengthVideo;
@property (nonatomic) float whitePointAdaptationUpdateDefaultDuration;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)setWhitePointAdaptationInteractiveUpdateEnabled:(bool)arg1;
- (void)setWhitePointAdaptationInteractiveUpdateTimingFunctionName:(id)arg1;
- (void)setWhitePointAdaptationStrengthGame:(float)arg1;
- (void)setWhitePointAdaptationStrengthPhoto:(float)arg1;
- (void)setWhitePointAdaptationStrengthReading:(float)arg1;
- (void)setWhitePointAdaptationStrengthStandard:(float)arg1;
- (void)setWhitePointAdaptationStrengthVideo:(float)arg1;
- (void)setWhitePointAdaptationUpdateDefaultDuration:(float)arg1;
- (bool)whitePointAdaptationInteractiveUpdateEnabled;
- (id)whitePointAdaptationInteractiveUpdateTimingFunctionName;
- (float)whitePointAdaptationStrengthGame;
- (float)whitePointAdaptationStrengthPhoto;
- (float)whitePointAdaptationStrengthReading;
- (float)whitePointAdaptationStrengthStandard;
- (float)whitePointAdaptationStrengthVideo;
- (float)whitePointAdaptationUpdateDefaultDuration;

@end

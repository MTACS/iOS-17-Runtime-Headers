
@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    double  _fastTypingTime;
    double  _fastTypingVolumeMultiplier;
    NSDictionary * _feedbacks;
    bool  _scalingForSpeedEnabled;
    double  _slowTypingTime;
}

@property (nonatomic) double fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier;
@property (nonatomic, retain) NSDictionary *feedbacks;
@property (nonatomic) bool scalingForSpeedEnabled;
@property (nonatomic) double slowTypingTime;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)defaultEnabled;
- (double)fastTypingTime;
- (double)fastTypingVolumeMultiplier;
- (id)feedbackKeyPaths;
- (id)feedbacks;
- (bool)scalingForSpeedEnabled;
- (void)setFastTypingTime:(double)arg1;
- (void)setFastTypingVolumeMultiplier:(double)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setScalingForSpeedEnabled:(bool)arg1;
- (void)setSlowTypingTime:(double)arg1;
- (double)slowTypingTime;

@end


@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _clickDownAudioFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _clickDownFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _clickUpAudioFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _clickUpFeedback;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)clickDownAudioFeedback;
- (id)clickDownFeedback;
- (id)clickDownPattern;
- (id)clickUpAudioFeedback;
- (id)clickUpFeedback;
- (id)clickUpPattern;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;
- (void)setClickDownAudioFeedback:(id)arg1;
- (void)setClickDownFeedback:(id)arg1;
- (void)setClickUpAudioFeedback:(id)arg1;
- (void)setClickUpFeedback:(id)arg1;
- (void)setclickDownFeedback:(id)arg1;

@end

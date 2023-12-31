
@interface _UIDragFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {
    _UIFeedback<_UIFeedbackContinuousPlayable> * _interactionProgressingFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionUpdatedFeedback;
    double  _progressingFeedbackDelay;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _targetUpdatedFeedback;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *interactionProgressingFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionUpdatedFeedback;
@property (nonatomic) double progressingFeedbackDelay;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *targetUpdatedFeedback;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedbackKeyPaths;
- (id)interactionProgressingFeedback;
- (id)interactionUpdatedFeedback;
- (bool)isEqual:(id)arg1;
- (double)progressingFeedbackDelay;
- (long long)requiredSupportLevel;
- (void)setInteractionProgressingFeedback:(id)arg1;
- (void)setInteractionUpdatedFeedback:(id)arg1;
- (void)setProgressingFeedbackDelay:(double)arg1;
- (void)setTargetUpdatedFeedback:(id)arg1;
- (id)targetUpdatedFeedback;

@end


@interface _UIFluidSliderFeedbackConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _detentFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _maxEdgeFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _minEdgeFeedback;
}

@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *detentFeedback;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *maxEdgeFeedback;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *minEdgeFeedback;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)detentFeedback;
- (id)maxEdgeFeedback;
- (id)minEdgeFeedback;
- (void)setdetentFeedback:(id)arg1;
- (void)setmaxEdgeFeedback:(id)arg1;
- (void)setminEdgeFeedback:(id)arg1;

@end

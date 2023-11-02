
@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionCancelledFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionEndedFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionStartedFeedback;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionCancelledFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionEndedFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionStartedFeedback;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (id)interactionCancelledFeedback;
- (id)interactionEndedFeedback;
- (id)interactionStartedFeedback;
- (void)setInteractionCancelledFeedback:(id)arg1;
- (void)setInteractionEndedFeedback:(id)arg1;
- (void)setInteractionStartedFeedback:(id)arg1;

@end

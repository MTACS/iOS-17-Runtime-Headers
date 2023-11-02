
@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *draggedPattern;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *poppedPattern;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *previewedPattern;

+ (id)defaultConfiguration;

- (id)draggedPattern;
- (id)feedbackKeyPaths;
- (id)poppedPattern;
- (id)previewedPattern;
- (long long)requiredSupportLevel;

@end

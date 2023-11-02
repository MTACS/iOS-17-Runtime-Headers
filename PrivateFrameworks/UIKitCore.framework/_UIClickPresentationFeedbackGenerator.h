
@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (id)_clickConfiguration;
- (void)dragged;
- (id)initWithConfiguration:(id)arg1 view:(id)arg2;
- (void)popped;
- (void)previewed;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end

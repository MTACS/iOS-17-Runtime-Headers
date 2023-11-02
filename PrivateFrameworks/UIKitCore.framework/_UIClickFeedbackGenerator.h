
@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorPressDriven, UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (id)_clickConfiguration;
- (id)initWithCoordinateSpace:(id)arg1;
- (void)pressedDown;
- (void)pressedUp;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end

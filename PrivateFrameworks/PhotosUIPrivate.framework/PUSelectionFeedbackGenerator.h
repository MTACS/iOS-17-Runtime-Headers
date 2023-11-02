
@interface PUSelectionFeedbackGenerator : NSObject {
    UISelectionFeedbackGenerator * _feedbackGenerator;
}

@property (nonatomic, readonly) UISelectionFeedbackGenerator *feedbackGenerator;

- (void).cxx_destruct;
- (id)feedbackGenerator;
- (id)init;
- (void)performFeedback;
- (void)prepareFeedback;

@end

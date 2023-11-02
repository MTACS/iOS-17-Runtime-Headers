
@protocol DMCProfileQuestionsControllerDelegate

@required

- (void)questionsController:(DMCInstallProfileQuestionViewController *)arg1 didFinishWithResponses:(NSArray *)arg2;
- (bool)questionsControllerIsDisplayedInSheet:(DMCInstallProfileQuestionViewController *)arg1;
- (void)setCurrentQuestionsController:(DMCInstallProfileQuestionViewController *)arg1;

@end

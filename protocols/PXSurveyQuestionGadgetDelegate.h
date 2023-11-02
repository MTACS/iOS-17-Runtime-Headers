
@protocol PXSurveyQuestionGadgetDelegate <PXGadgetDelegate>

@required

- (void)didAnswerQuestionForGadget:(PXSurveyQuestionGadget *)arg1;
- (void)surveyQuestionGadgetsWantsOneUpPresentation:(PXSurveyQuestionGadget *)arg1;

@end

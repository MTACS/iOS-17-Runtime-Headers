
@protocol PXSurveyQuestionsGadgetContentViewDelegate <NSObject>

@required

- (void)gadgetContentView:(PXSurveyQuestionsGadgetContentView *)arg1 didAnswer:(unsigned long long)arg2 withReason:(NSString *)arg3;
- (unsigned short)questionType;

@optional

- (NSString *)gadgetContentView:(PXSurveyQuestionsGadgetContentView *)arg1 additionalReasonMessageForAnswer:(unsigned long long)arg2;
- (NSString *)gadgetContentView:(PXSurveyQuestionsGadgetContentView *)arg1 additionalReasonTitleForAnswer:(unsigned long long)arg2;
- (NSArray *)gadgetContentView:(PXSurveyQuestionsGadgetContentView *)arg1 additionalReasonsForAnswer:(unsigned long long)arg2;

@end

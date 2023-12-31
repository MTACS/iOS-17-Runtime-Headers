
@protocol WBSFormAutoFillCorrectionManagerDelegate <NSObject>

@optional

- (bool)autoFillCorrectionManagerShouldProcessFeedback:(WBSFormAutoFillCorrectionManager *)arg1;
- (<WBSFormAutoFillFeedbackProcessor> *)feedbackProcessorForAutoFillCorrectionManager:(WBSFormAutoFillCorrectionManager *)arg1;

@end

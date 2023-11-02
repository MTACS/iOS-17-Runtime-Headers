
@protocol AECAssessmentSessionWrapperDelegate

@required

- (void)assessmentSessionWrapper:(AECAssessmentSessionWrapper *)arg1 failedToBeginWithError:(NSError *)arg2;
- (void)assessmentSessionWrapper:(AECAssessmentSessionWrapper *)arg1 failedToUpdateToConfigurationWrapper:(AECAssessmentConfigurationWrapper *)arg2 error:(NSError *)arg3;
- (void)assessmentSessionWrapper:(AECAssessmentSessionWrapper *)arg1 wasInterruptedWithError:(NSError *)arg2;
- (void)assessmentSessionWrapperDidBegin:(AECAssessmentSessionWrapper *)arg1;
- (void)assessmentSessionWrapperDidEnd:(AECAssessmentSessionWrapper *)arg1;
- (void)assessmentSessionWrapperDidUpdate:(AECAssessmentSessionWrapper *)arg1;

@end

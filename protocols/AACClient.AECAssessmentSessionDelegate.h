
@protocol AACClient.AECAssessmentSessionDelegate

@required

- (void)assessmentSession:(_TtC9AACClient20AECAssessmentSession *)arg1 failedToBeginWithError:(NSError *)arg2;
- (void)assessmentSession:(_TtC9AACClient20AECAssessmentSession *)arg1 wasInterruptedWithError:(NSError *)arg2;
- (void)assessmentSessionDidBegin:(_TtC9AACClient20AECAssessmentSession *)arg1;
- (void)assessmentSessionDidEnd:(_TtC9AACClient20AECAssessmentSession *)arg1;
- (void)assessmentSessionDidUpdate:(_TtC9AACClient20AECAssessmentSession *)arg1;
- (void)assessmentSesson:(_TtC9AACClient20AECAssessmentSession *)arg1 failedToUpdateToConfiguration:(_TtC9AACClient26AECAssessmentConfiguration *)arg2 error:(NSError *)arg3;

@end

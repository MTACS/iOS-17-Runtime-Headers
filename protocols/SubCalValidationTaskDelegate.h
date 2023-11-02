
@protocol SubCalValidationTaskDelegate <SubCalDATaskTrustDelegate>

@required

- (void)subCalValidationTask:(SubCalValidationTask *)arg1 downloadProgressedTo:(long long)arg2 outOf:(long long)arg3;
- (void)subCalValidationTask:(SubCalValidationTask *)arg1 finishedWithError:(NSError *)arg2 calendarName:(NSString *)arg3 document:(ICSDocument *)arg4 calendarData:(NSData *)arg5;

@end

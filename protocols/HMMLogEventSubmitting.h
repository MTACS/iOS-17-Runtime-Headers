
@protocol HMMLogEventSubmitting <NSObject>

@required

- (void)submitLogEvent:(HMMLogEvent *)arg1;
- (void)submitLogEvent:(HMMLogEvent *)arg1 error:(NSError *)arg2;

@end

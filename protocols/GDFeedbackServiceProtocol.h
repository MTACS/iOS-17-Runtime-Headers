
@protocol GDFeedbackServiceProtocol <NSObject>

@required

- (bool)logWithFeedbackData:(NSData *)arg1 type:(NSString *)arg2 variant:(NSString *)arg3 eventId:(long long)arg4 withTimestamp:(NSDate *)arg5 shouldProcessImmediately:(bool)arg6 error:(id*)arg7;

@end


@interface IntelligencePlatform.FeedbackServiceNoOpServer : NSObject <GDFeedbackServiceProtocol>

- (id)init;
- (bool)logWithFeedbackData:(id)arg1 type:(id)arg2 variant:(id)arg3 eventId:(long long)arg4 withTimestamp:(id)arg5 shouldProcessImmediately:(bool)arg6 error:(id*)arg7;

@end

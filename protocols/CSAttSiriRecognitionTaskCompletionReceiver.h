
@protocol CSAttSiriRecognitionTaskCompletionReceiver <NSObject>

@optional

- (void)didCompleteRecognitionTaskWithStatistics:(NSDictionary *)arg1 requestId:(NSString *)arg2 endpointMode:(long long)arg3 error:(NSError *)arg4;

@end

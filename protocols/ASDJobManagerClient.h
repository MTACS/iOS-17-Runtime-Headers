
@protocol ASDJobManagerClient <NSObject>

@required

- (void)didChangeJobs:(NSArray *)arg1;
- (void)didCompleteJobs:(NSArray *)arg1 finalPhases:(NSDictionary *)arg2;
- (void)didUpdateProgress:(NSDictionary *)arg1;
- (void)didUpdateStates:(NSDictionary *)arg1;

@end

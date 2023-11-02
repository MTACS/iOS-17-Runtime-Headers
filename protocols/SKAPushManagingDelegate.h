
@protocol SKAPushManagingDelegate

@required

- (void)pushManager:(id <SKAPushManaging>)arg1 didReceiveData:(NSData *)arg2 onChannel:(NSString *)arg3 dateReceived:(NSDate *)arg4 dateExpired:(NSDate *)arg5;
- (void)pushManager:(id <SKAPushManaging>)arg1 failedToSubscribeToChannel:(NSString *)arg2 withError:(NSError *)arg3;

@end


@interface IMDDistributedNotificationXPCEventStreamHandler : IMDXPCEventStreamHandler

+ (id)sharedInstance;

- (id)init;
- (id)initWithEventStreamName:(const char *)arg1;

@end

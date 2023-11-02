
@protocol SKDaemonCompletionProtocol <NSObject>

@required

- (void)requestWithUUID:(NSString *)arg1 didCompleteWithResult:(NSArray *)arg2;

@end

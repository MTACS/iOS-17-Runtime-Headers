
@protocol IMDXPCEventStreamHandlerDelegate <NSObject>

@required

- (void)eventStreamHandler:(IMDXPCEventStreamHandler *)arg1 didReceiveEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@end

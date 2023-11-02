
@protocol EMInteractionLoggerInterface <NSObject>

@required

- (void)logEvent:(NSString *)arg1 date:(NSDate *)arg2 data:(NSDictionary *)arg3;
- (void)logEvent:(NSString *)arg1 date:(NSDate *)arg2 messageID:(EMMessageObjectID *)arg3 data:(NSDictionary *)arg4;

@end

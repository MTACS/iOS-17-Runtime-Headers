
@protocol CATTaskOperationNotificationDelegate <NSObject>

@optional

- (void)taskOperation:(CATTaskOperation *)arg1 didPostNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@end

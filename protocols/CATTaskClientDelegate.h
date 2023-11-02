
@protocol CATTaskClientDelegate <NSObject>

@required

- (void)client:(CATTaskClient *)arg1 didInterruptWithError:(NSError *)arg2;

@optional

- (void)client:(CATTaskClient *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)clientDidConnect:(CATTaskClient *)arg1;
- (void)clientDidDisconnect:(CATTaskClient *)arg1;
- (void)clientDidInvalidate:(CATTaskClient *)arg1;
- (void)clientWillInvalidate:(CATTaskClient *)arg1;

@end

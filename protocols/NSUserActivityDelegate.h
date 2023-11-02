
@protocol NSUserActivityDelegate <NSObject>

@optional

- (void)userActivity:(NSUserActivity *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)userActivityWasContinued:(NSUserActivity *)arg1;
- (void)userActivityWillSave:(NSUserActivity *)arg1;

@end

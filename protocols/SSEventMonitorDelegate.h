
@protocol SSEventMonitorDelegate <NSObject>

@optional

- (void)eventMonitor:(SSEventMonitor *)arg1 receivedEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@end

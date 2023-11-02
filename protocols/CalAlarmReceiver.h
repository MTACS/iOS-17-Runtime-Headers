
@protocol CalAlarmReceiver <NSObject>

@required

- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(NSString *)arg1;

@end

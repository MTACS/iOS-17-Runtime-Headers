
@protocol ClockAngelClient <NSObject>

@required

- (void)didEndAlertWithId:(NSString *)arg1 activityId:(NSString *)arg2;
- (void)dismissAlarmWithId:(NSString *)arg1;
- (void)dismissTimerWithIdentifier:(NSString *)arg1;
- (void)pauseTimerWithId:(NSString *)arg1;
- (void)repeatTimerWithIdentifier:(NSString *)arg1;
- (void)resendAlarmDataEntryWithId:(NSString *)arg1;
- (void)resendTimerDataEntryWithId:(NSString *)arg1;
- (void)resumeTimerWithId:(NSString *)arg1;
- (void)snoozeAlarmWithId:(NSString *)arg1;
- (void)stopSnoozeAlarmWithId:(NSString *)arg1;
- (void)stopTimerWithId:(NSString *)arg1;

@end

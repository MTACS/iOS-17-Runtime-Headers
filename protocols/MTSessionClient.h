
@protocol MTSessionClient <NSObject>

@required

- (void)alarmSessionEndedForId:(NSString *)arg1;
- (void)timerSessionEndedForId:(NSString *)arg1;

@end

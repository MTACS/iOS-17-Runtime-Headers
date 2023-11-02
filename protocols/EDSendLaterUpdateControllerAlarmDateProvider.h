
@protocol EDSendLaterUpdateControllerAlarmDateProvider <NSObject>

@required

- (NSDate *)nextDate;
- (void)setNextDate:(NSDate *)arg1;

@end


@protocol HKCalendarWeekViewDelegate

@required

- (void)week:(HKCalendarWeekView *)arg1 cellSelected:(HKCalendarDayCell *)arg2;

@optional

- (void)week:(HKCalendarWeekView *)arg1 pressedOnDay:(long long)arg2 down:(bool)arg3;

@end


@interface CUIKTodayInvalidationTimerWrapper : NSObject {
    NSTimer * _tzSupportDayRolloverTimer;
}

- (void).cxx_destruct;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimerWithCalendar:(id)arg1;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1;
- (void)invalidateTodayAndNotifyIfChanged;
- (bool)todayChangedAfterInvalidation;

@end

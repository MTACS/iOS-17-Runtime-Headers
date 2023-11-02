
@protocol CALNRemoteMutator <NSObject>

@required

- (bool)deleteEvent:(EKEvent *)arg1 withSpan:(long long)arg2;
- (void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(EKEvent *)arg3;
- (void)setSnoozeTimeInterval:(double)arg1 alarm:(EKAlarm *)arg2 calendarItem:(EKCalendarItem *)arg3;

@end

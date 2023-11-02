
@protocol CalDAVCalendarSyncDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)calendarSyncForPrincipal:(id <CalDAVPrincipal>)arg1 calendar:(id <CalDAVCalendar>)arg2 completedWithError:(NSError *)arg3;

@end

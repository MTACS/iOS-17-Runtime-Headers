
@protocol CALNDataSourceEventRepresentationProvider <NSObject>

@required

- (NSDictionary *)eventRepresentationDictionaryForInvitationNotification:(EKCalendarEventInvitationNotification *)arg1 event:(EKEvent *)arg2 date:(NSDate *)arg3 endDate:(NSDate *)arg4 timeZone:(NSTimeZone *)arg5;
- (NSDictionary *)eventRepresentationDictionaryForUpcomingEvent:(EKEvent *)arg1 date:(NSDate *)arg2 displayTimeZone:(NSTimeZone *)arg3;

@end

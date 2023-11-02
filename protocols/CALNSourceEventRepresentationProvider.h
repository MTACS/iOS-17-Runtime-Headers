
@protocol CALNSourceEventRepresentationProvider <NSObject>

@required

- (NSDictionary *)eventRepresentationDictionaryForResourceChangeNotification:(EKCalendarResourceChangeNotification *)arg1 message:(NSString *)arg2 date:(NSDate *)arg3 endDate:(NSDate *)arg4 timeZone:(NSTimeZone *)arg5;
- (NSDictionary *)eventRepresentationDictionaryForResponseNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (NSDictionary *)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (NSDictionary *)updateEventRepresentationDictionary:(NSDictionary *)arg1 withHypothesisMessage:(NSString *)arg2;

@end

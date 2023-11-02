
@protocol ATXNotificationQuantityProviderProtocol <NSObject>

@required

- (NSDictionary *)messageNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (NSDictionary *)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;
- (NSDictionary *)totalNotificationsPerAppFromStartTime:(double)arg1 toEndTime:(double)arg2;

@end

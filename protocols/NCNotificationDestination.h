
@protocol NCNotificationDestination <NSObject>

@required

- (bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;
- (<NCNotificationDestinationDelegate> *)delegate;
- (BSServiceConnectionEndpoint *)endpoint;
- (NSString *)identifier;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
- (void)setDelegate:(id <NCNotificationDestinationDelegate>)arg1;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;

@optional

- (bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
- (void)notificationsLoadedForSectionIdentifier:(NSString *)arg1;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (void)updateNotificationSystemSettings:(NCNotificationSystemSettings *)arg1 previousSystemSettings:(NCNotificationSystemSettings *)arg2;

@end


@interface SAUIPlayNotificationSound : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, copy) NSString *notificationType;

+ (id)playNotificationSound;
+ (id)playNotificationSoundWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)notificationId;
- (id)notificationType;
- (bool)requiresResponse;
- (void)setNotificationId:(id)arg1;
- (void)setNotificationType:(id)arg1;

@end


@interface SANotificationsSearch : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *afterNotificationId;
@property (nonatomic, copy) NSNumber *isOnDeviceSearch;
@property (nonatomic, copy) NSString *notificationType;
@property (nonatomic, copy) NSString *priority;
@property (nonatomic, copy) NSString *sourceAppId;
@property (nonatomic, copy) NSNumber *supportsSpokenNotifications;

+ (id)notificationsSearch;
+ (id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)afterNotificationId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isOnDeviceSearch;
- (id)notificationType;
- (id)priority;
- (bool)requiresResponse;
- (void)setAfterNotificationId:(id)arg1;
- (void)setIsOnDeviceSearch:(id)arg1;
- (void)setNotificationType:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setSourceAppId:(id)arg1;
- (void)setSupportsSpokenNotifications:(id)arg1;
- (id)sourceAppId;
- (id)supportsSpokenNotifications;

@end

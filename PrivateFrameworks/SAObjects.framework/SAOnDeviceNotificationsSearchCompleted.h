
@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *notifications;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)notifications;
- (bool)requiresResponse;
- (void)setNotifications:(id)arg1;

@end

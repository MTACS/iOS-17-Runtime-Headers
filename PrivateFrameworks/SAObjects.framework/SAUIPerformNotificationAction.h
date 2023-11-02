
@interface SAUIPerformNotificationAction : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *notificationIdentifier;

- (id)actionIdentifier;
- (id)actionTitle;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)notificationIdentifier;
- (bool)requiresResponse;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setNotificationIdentifier:(id)arg1;

@end

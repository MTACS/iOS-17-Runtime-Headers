
@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *homeId;
@property (nonatomic, copy) NSString *notificationBody;
@property (nonatomic, copy) NSString *originatingDeviceName;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)homeId;
- (bool)mutatingCommand;
- (id)notificationBody;
- (id)originatingDeviceName;
- (bool)requiresResponse;
- (void)setHomeId:(id)arg1;
- (void)setNotificationBody:(id)arg1;
- (void)setOriginatingDeviceName:(id)arg1;

@end

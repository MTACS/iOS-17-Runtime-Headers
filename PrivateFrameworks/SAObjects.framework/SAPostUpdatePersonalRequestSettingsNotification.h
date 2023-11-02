
@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *homeId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)homeId;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setHomeId:(id)arg1;

@end

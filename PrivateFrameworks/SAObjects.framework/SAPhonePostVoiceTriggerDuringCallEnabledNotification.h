
@interface SAPhonePostVoiceTriggerDuringCallEnabledNotification : SABaseClientBoundCommand

@property (nonatomic) bool enableVoiceTriggerDuringPhoneCall;

- (bool)enableVoiceTriggerDuringPhoneCall;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setEnableVoiceTriggerDuringPhoneCall:(bool)arg1;

@end

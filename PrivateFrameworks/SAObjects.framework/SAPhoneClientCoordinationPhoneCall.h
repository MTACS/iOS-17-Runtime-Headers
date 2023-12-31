
@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand

@property (nonatomic, retain) SAPersonAttribute *callRecipient;
@property (nonatomic) bool emergencyCall;

+ (id)clientCoordinationPhoneCall;
+ (id)clientCoordinationPhoneCallWithDictionary:(id)arg1 context:(id)arg2;

- (id)callRecipient;
- (bool)emergencyCall;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCallRecipient:(id)arg1;
- (void)setEmergencyCall:(bool)arg1;

@end

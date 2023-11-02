
@protocol _INPBIntentResponse <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasPayloadFailure;
- (bool)hasPayloadSuccess;
- (bool)hasRequiresAuthentication;
- (bool)hasRequiresProtectedData;
- (bool)hasType;
- (bool)hasUserActivity;
- (_INPBIntentResponsePayloadFailure *)payloadFailure;
- (_INPBIntentResponsePayloadSuccess *)payloadSuccess;
- (bool)requiresAuthentication;
- (bool)requiresProtectedData;
- (void)setHasRequiresAuthentication:(bool)arg1;
- (void)setHasRequiresProtectedData:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPayloadFailure:(_INPBIntentResponsePayloadFailure *)arg1;
- (void)setPayloadSuccess:(_INPBIntentResponsePayloadSuccess *)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setRequiresProtectedData:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUserActivity:(_INPBUserActivity *)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBUserActivity *)userActivity;

@end

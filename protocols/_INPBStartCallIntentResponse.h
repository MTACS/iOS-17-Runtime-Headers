
@protocol _INPBStartCallIntentResponse <NSObject>

@required

+ (Class)restrictedContactsType;

- (int)StringAsConfirmationReason:(NSString *)arg1;
- (void)addRestrictedContacts:(_INPBContactValue *)arg1;
- (void)clearRestrictedContacts;
- (int)confirmationReason;
- (NSString *)confirmationReasonAsString:(int)arg1;
- (bool)hasConfirmationReason;
- (bool)hasShouldDoEmergencyCountdown;
- (bool)hasStartedCall;
- (NSArray *)restrictedContacts;
- (_INPBContactValue *)restrictedContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restrictedContactsCount;
- (void)setConfirmationReason:(int)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)setHasShouldDoEmergencyCountdown:(bool)arg1;
- (void)setRestrictedContacts:(NSArray *)arg1;
- (void)setShouldDoEmergencyCountdown:(bool)arg1;
- (void)setStartedCall:(_INPBConnectedCall *)arg1;
- (bool)shouldDoEmergencyCountdown;
- (_INPBConnectedCall *)startedCall;

@end

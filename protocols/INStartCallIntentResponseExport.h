
@protocol INStartCallIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (long long)confirmationReason;
- (NSArray *)restrictedContacts;
- (void)setConfirmationReason:(long long)arg1;
- (void)setRestrictedContacts:(NSArray *)arg1;
- (void)setShouldDoEmergencyCountdown:(NSNumber *)arg1;
- (void)setStartedCall:(INConnectedCall *)arg1;
- (NSNumber *)shouldDoEmergencyCountdown;
- (INConnectedCall *)startedCall;

@end


@interface INStartCallIntentResponse : INIntentResponse <INStartCallIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (nonatomic) long long confirmationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *restrictedContacts;
@property (nonatomic, copy) NSNumber *shouldDoEmergencyCountdown;
@property (nonatomic, copy) INConnectedCall *startedCall;
@property (readonly) Class superclass;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)_codeWithName:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (long long)_intentResponseCode;
- (long long)code;
- (long long)confirmationReason;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (id)restrictedContacts;
- (void)setConfirmationReason:(long long)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setRestrictedContacts:(id)arg1;
- (void)setShouldDoEmergencyCountdown:(id)arg1;
- (void)setStartedCall:(id)arg1;
- (id)shouldDoEmergencyCountdown;
- (id)startedCall;

@end

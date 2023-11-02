
@interface INCreateEventIntentResponse : INIntentResponse <INCreateEventIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (nonatomic) long long confirmationReason;
@property (nonatomic, copy) NSArray *conflictingEventIdentifiers;
@property (nonatomic, copy) INCalendarEvent *createdEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
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
- (id)conflictingEventIdentifiers;
- (id)createdEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (void)setConfirmationReason:(long long)arg1;
- (void)setConflictingEventIdentifiers:(id)arg1;
- (void)setCreatedEvent:(id)arg1;
- (void)setPropertiesByName:(id)arg1;

@end

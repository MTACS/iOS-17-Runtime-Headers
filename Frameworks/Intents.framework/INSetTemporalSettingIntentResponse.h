
@interface INSetTemporalSettingIntentResponse : INIntentResponse <INSetTemporalSettingIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) INDateComponentsRange *currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INDateComponentsRange *oldValue;
@property (nonatomic, copy) INDateComponentsRange *previousValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) INDateComponentsRange *updatedValue;

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
- (id)currentValue;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetail;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)oldValue;
- (id)previousValue;
- (id)propertiesByName;
- (void)setCurrentValue:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setOldValue:(id)arg1;
- (void)setPreviousValue:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setUpdatedValue:(id)arg1;
- (id)updatedValue;

@end

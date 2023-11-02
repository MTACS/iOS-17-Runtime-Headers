
@interface INSetBinarySettingIntentResponse : INIntentResponse <INSetBinarySettingIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (nonatomic) long long currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long oldValue;
@property (nonatomic) long long previousValue;
@property (readonly) Class superclass;
@property (nonatomic) long long updatedValue;

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
- (long long)currentValue;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetail;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (long long)oldValue;
- (long long)previousValue;
- (id)propertiesByName;
- (void)setCurrentValue:(long long)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setOldValue:(long long)arg1;
- (void)setPreviousValue:(long long)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setUpdatedValue:(long long)arg1;
- (long long)updatedValue;

@end

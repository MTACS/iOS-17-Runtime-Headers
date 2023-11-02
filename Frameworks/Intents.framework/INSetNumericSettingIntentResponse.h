
@interface INSetNumericSettingIntentResponse : INIntentResponse <INSetNumericSettingIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) INNumericSettingValue *currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INNumericSettingValue *maxValue;
@property (nonatomic, copy) INNumericSettingValue *minValue;
@property (nonatomic, copy) INNumericSettingValue *oldValue;
@property (nonatomic, copy) INNumericSettingValue *previousValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) INNumericSettingValue *updatedValue;

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
- (id)maxValue;
- (id)minValue;
- (id)oldValue;
- (id)previousValue;
- (id)propertiesByName;
- (void)setCurrentValue:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setOldValue:(id)arg1;
- (void)setPreviousValue:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setUpdatedValue:(id)arg1;
- (id)updatedValue;

@end

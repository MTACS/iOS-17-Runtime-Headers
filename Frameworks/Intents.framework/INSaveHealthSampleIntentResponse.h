
@interface INSaveHealthSampleIntentResponse : INIntentResponse <INSaveHealthSampleIntentResponseExport>

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultUnit;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *punchoutUrl;
@property (nonatomic, copy) INDateComponentsRange *recordDate;
@property (nonatomic, copy) NSArray *sampleUuids;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userProvidedUnit;
@property (nonatomic, copy) NSArray *valuesDefaultUnits;
@property (nonatomic, copy) NSArray *valuesUserProvidedUnits;

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
- (id)defaultUnit;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (id)punchoutUrl;
- (id)recordDate;
- (id)sampleUuids;
- (void)setDefaultUnit:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setPunchoutUrl:(id)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setSampleUuids:(id)arg1;
- (void)setUserProvidedUnit:(id)arg1;
- (void)setValuesDefaultUnits:(id)arg1;
- (void)setValuesUserProvidedUnits:(id)arg1;
- (id)userProvidedUnit;
- (id)valuesDefaultUnits;
- (id)valuesUserProvidedUnits;

@end


@protocol INSaveHealthSampleIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)defaultUnit;
- (NSString *)punchoutUrl;
- (INDateComponentsRange *)recordDate;
- (NSArray *)sampleUuids;
- (void)setDefaultUnit:(NSString *)arg1;
- (void)setPunchoutUrl:(NSString *)arg1;
- (void)setRecordDate:(INDateComponentsRange *)arg1;
- (void)setSampleUuids:(NSArray *)arg1;
- (void)setUserProvidedUnit:(NSString *)arg1;
- (void)setValuesDefaultUnits:(NSArray *)arg1;
- (void)setValuesUserProvidedUnits:(NSArray *)arg1;
- (NSString *)userProvidedUnit;
- (NSArray *)valuesDefaultUnits;
- (NSArray *)valuesUserProvidedUnits;

@end

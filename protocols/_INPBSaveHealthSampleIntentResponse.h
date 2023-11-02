
@protocol _INPBSaveHealthSampleIntentResponse <NSObject>

@required

+ (Class)sampleUuidsType;
+ (Class)valuesDefaultUnitType;
+ (Class)valuesUserProvidedUnitType;

- (void)addSampleUuids:(_INPBString *)arg1;
- (void)addValuesDefaultUnit:(_INPBWellnessValue *)arg1;
- (void)addValuesUserProvidedUnit:(_INPBWellnessValue *)arg1;
- (void)clearSampleUuids;
- (void)clearValuesDefaultUnits;
- (void)clearValuesUserProvidedUnits;
- (_INPBString *)defaultUnit;
- (bool)hasDefaultUnit;
- (bool)hasPunchoutUrl;
- (bool)hasRecordDate;
- (bool)hasUserProvidedUnit;
- (_INPBString *)punchoutUrl;
- (_INPBDateTimeRange *)recordDate;
- (NSArray *)sampleUuids;
- (_INPBString *)sampleUuidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sampleUuidsCount;
- (void)setDefaultUnit:(_INPBString *)arg1;
- (void)setPunchoutUrl:(_INPBString *)arg1;
- (void)setRecordDate:(_INPBDateTimeRange *)arg1;
- (void)setSampleUuids:(NSArray *)arg1;
- (void)setUserProvidedUnit:(_INPBString *)arg1;
- (void)setValuesDefaultUnits:(NSArray *)arg1;
- (void)setValuesUserProvidedUnits:(NSArray *)arg1;
- (_INPBString *)userProvidedUnit;
- (_INPBWellnessValue *)valuesDefaultUnitAtIndex:(unsigned long long)arg1;
- (NSArray *)valuesDefaultUnits;
- (unsigned long long)valuesDefaultUnitsCount;
- (_INPBWellnessValue *)valuesUserProvidedUnitAtIndex:(unsigned long long)arg1;
- (NSArray *)valuesUserProvidedUnits;
- (unsigned long long)valuesUserProvidedUnitsCount;

@end

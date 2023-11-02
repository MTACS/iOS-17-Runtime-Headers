
@interface _INPBSaveHealthSampleIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSaveHealthSampleIntentResponse> {
    _INPBString * _defaultUnit;
    struct { }  _has;
    _INPBString * _punchoutUrl;
    _INPBDateTimeRange * _recordDate;
    NSArray * _sampleUuids;
    _INPBString * _userProvidedUnit;
    NSArray * _valuesDefaultUnits;
    NSArray * _valuesUserProvidedUnits;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _INPBString *defaultUnit;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDefaultUnit;
@property (nonatomic, readonly) bool hasPunchoutUrl;
@property (nonatomic, readonly) bool hasRecordDate;
@property (nonatomic, readonly) bool hasUserProvidedUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *punchoutUrl;
@property (nonatomic, retain) _INPBDateTimeRange *recordDate;
@property (nonatomic, copy) NSArray *sampleUuids;
@property (nonatomic, readonly) unsigned long long sampleUuidsCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBString *userProvidedUnit;
@property (nonatomic, copy) NSArray *valuesDefaultUnits;
@property (nonatomic, readonly) unsigned long long valuesDefaultUnitsCount;
@property (nonatomic, copy) NSArray *valuesUserProvidedUnits;
@property (nonatomic, readonly) unsigned long long valuesUserProvidedUnitsCount;

+ (Class)sampleUuidsType;
+ (bool)supportsSecureCoding;
+ (Class)valuesDefaultUnitType;
+ (Class)valuesUserProvidedUnitType;

- (void).cxx_destruct;
- (void)addSampleUuids:(id)arg1;
- (void)addValuesDefaultUnit:(id)arg1;
- (void)addValuesUserProvidedUnit:(id)arg1;
- (void)clearSampleUuids;
- (void)clearValuesDefaultUnits;
- (void)clearValuesUserProvidedUnits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultUnit;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDefaultUnit;
- (bool)hasPunchoutUrl;
- (bool)hasRecordDate;
- (bool)hasUserProvidedUnit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)punchoutUrl;
- (bool)readFrom:(id)arg1;
- (id)recordDate;
- (id)sampleUuids;
- (id)sampleUuidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sampleUuidsCount;
- (void)setDefaultUnit:(id)arg1;
- (void)setPunchoutUrl:(id)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setSampleUuids:(id)arg1;
- (void)setUserProvidedUnit:(id)arg1;
- (void)setValuesDefaultUnits:(id)arg1;
- (void)setValuesUserProvidedUnits:(id)arg1;
- (id)userProvidedUnit;
- (id)valuesDefaultUnitAtIndex:(unsigned long long)arg1;
- (id)valuesDefaultUnits;
- (unsigned long long)valuesDefaultUnitsCount;
- (id)valuesUserProvidedUnitAtIndex:(unsigned long long)arg1;
- (id)valuesUserProvidedUnits;
- (unsigned long long)valuesUserProvidedUnitsCount;
- (void)writeTo:(id)arg1;

@end

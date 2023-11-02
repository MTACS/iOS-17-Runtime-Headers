
@interface _INPBSaveHealthSampleIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSaveHealthSampleIntent> {
    struct { 
        unsigned int objectType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _objectType;
    _INPBDateTimeRange * _recordDate;
    NSArray * _sampleMetadatas;
    _INPBWellnessUnitType * _unit;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasObjectType;
@property (nonatomic, readonly) bool hasRecordDate;
@property (nonatomic, readonly) bool hasUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic, retain) _INPBDateTimeRange *recordDate;
@property (nonatomic, copy) NSArray *sampleMetadatas;
@property (nonatomic, readonly) unsigned long long sampleMetadatasCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBWellnessUnitType *unit;
@property (nonatomic, copy) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (Class)sampleMetadataType;
+ (bool)supportsSecureCoding;
+ (Class)valuesType;

- (void).cxx_destruct;
- (int)StringAsObjectType:(id)arg1;
- (void)addSampleMetadata:(id)arg1;
- (void)addValues:(id)arg1;
- (void)clearSampleMetadatas;
- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasObjectType;
- (bool)hasRecordDate;
- (bool)hasUnit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)objectType;
- (id)objectTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordDate;
- (id)sampleMetadataAtIndex:(unsigned long long)arg1;
- (id)sampleMetadatas;
- (unsigned long long)sampleMetadatasCount;
- (void)setHasObjectType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setSampleMetadatas:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setValues:(id)arg1;
- (id)unit;
- (id)values;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end

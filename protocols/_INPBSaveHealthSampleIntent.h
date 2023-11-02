
@protocol _INPBSaveHealthSampleIntent <NSObject>

@required

+ (Class)sampleMetadataType;
+ (Class)valuesType;

- (int)StringAsObjectType:(NSString *)arg1;
- (void)addSampleMetadata:(_INPBWellnessMetadataPair *)arg1;
- (void)addValues:(_INPBWellnessValue *)arg1;
- (void)clearSampleMetadatas;
- (void)clearValues;
- (bool)hasIntentMetadata;
- (bool)hasObjectType;
- (bool)hasRecordDate;
- (bool)hasUnit;
- (_INPBIntentMetadata *)intentMetadata;
- (int)objectType;
- (NSString *)objectTypeAsString:(int)arg1;
- (_INPBDateTimeRange *)recordDate;
- (_INPBWellnessMetadataPair *)sampleMetadataAtIndex:(unsigned long long)arg1;
- (NSArray *)sampleMetadatas;
- (unsigned long long)sampleMetadatasCount;
- (void)setHasObjectType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setObjectType:(int)arg1;
- (void)setRecordDate:(_INPBDateTimeRange *)arg1;
- (void)setSampleMetadatas:(NSArray *)arg1;
- (void)setUnit:(_INPBWellnessUnitType *)arg1;
- (void)setValues:(NSArray *)arg1;
- (_INPBWellnessUnitType *)unit;
- (NSArray *)values;
- (_INPBWellnessValue *)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;

@end

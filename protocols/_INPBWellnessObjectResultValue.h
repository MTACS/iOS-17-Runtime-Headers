
@protocol _INPBWellnessObjectResultValue <NSObject>

@required

+ (Class)valuesType;

- (int)StringAsResultType:(NSString *)arg1;
- (void)addValues:(_INPBWellnessValue *)arg1;
- (void)clearValues;
- (bool)hasRecordDate;
- (bool)hasResultType;
- (bool)hasUnit;
- (_INPBDateTimeRange *)recordDate;
- (int)resultType;
- (NSString *)resultTypeAsString:(int)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setRecordDate:(_INPBDateTimeRange *)arg1;
- (void)setResultType:(int)arg1;
- (void)setUnit:(_INPBString *)arg1;
- (void)setValues:(NSArray *)arg1;
- (_INPBString *)unit;
- (NSArray *)values;
- (_INPBWellnessValue *)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;

@end

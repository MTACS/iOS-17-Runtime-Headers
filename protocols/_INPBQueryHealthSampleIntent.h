
@protocol _INPBQueryHealthSampleIntent <NSObject>

@required

+ (Class)recordDateType;
+ (Class)thresholdValuesType;

- (int)StringAsExpectedResultType:(NSString *)arg1;
- (int)StringAsObjectType:(NSString *)arg1;
- (int)StringAsQuestionType:(NSString *)arg1;
- (void)addRecordDate:(_INPBDateTimeRange *)arg1;
- (void)addThresholdValues:(_INPBWellnessValue *)arg1;
- (void)clearRecordDates;
- (void)clearThresholdValues;
- (int)expectedResultType;
- (NSString *)expectedResultTypeAsString:(int)arg1;
- (bool)hasExpectedResultType;
- (bool)hasIntentMetadata;
- (bool)hasObjectType;
- (bool)hasQuestionType;
- (bool)hasUnit;
- (_INPBIntentMetadata *)intentMetadata;
- (int)objectType;
- (NSString *)objectTypeAsString:(int)arg1;
- (int)questionType;
- (NSString *)questionTypeAsString:(int)arg1;
- (_INPBDateTimeRange *)recordDateAtIndex:(unsigned long long)arg1;
- (NSArray *)recordDates;
- (unsigned long long)recordDatesCount;
- (void)setExpectedResultType:(int)arg1;
- (void)setHasExpectedResultType:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setHasQuestionType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setObjectType:(int)arg1;
- (void)setQuestionType:(int)arg1;
- (void)setRecordDates:(NSArray *)arg1;
- (void)setThresholdValues:(NSArray *)arg1;
- (void)setUnit:(_INPBWellnessUnitType *)arg1;
- (NSArray *)thresholdValues;
- (_INPBWellnessValue *)thresholdValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)thresholdValuesCount;
- (_INPBWellnessUnitType *)unit;

@end

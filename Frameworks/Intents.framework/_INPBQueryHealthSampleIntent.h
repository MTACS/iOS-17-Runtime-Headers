
@interface _INPBQueryHealthSampleIntent : PBCodable <NSCopying, NSSecureCoding, _INPBQueryHealthSampleIntent> {
    int  _expectedResultType;
    struct { 
        unsigned int expectedResultType : 1; 
        unsigned int objectType : 1; 
        unsigned int questionType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _objectType;
    int  _questionType;
    NSArray * _recordDates;
    NSArray * _thresholdValues;
    _INPBWellnessUnitType * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int expectedResultType;
@property (nonatomic) bool hasExpectedResultType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) bool hasQuestionType;
@property (nonatomic, readonly) bool hasUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) int questionType;
@property (nonatomic, copy) NSArray *recordDates;
@property (nonatomic, readonly) unsigned long long recordDatesCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *thresholdValues;
@property (nonatomic, readonly) unsigned long long thresholdValuesCount;
@property (nonatomic, retain) _INPBWellnessUnitType *unit;

+ (Class)recordDateType;
+ (bool)supportsSecureCoding;
+ (Class)thresholdValuesType;

- (void).cxx_destruct;
- (int)StringAsExpectedResultType:(id)arg1;
- (int)StringAsObjectType:(id)arg1;
- (int)StringAsQuestionType:(id)arg1;
- (void)addRecordDate:(id)arg1;
- (void)addThresholdValues:(id)arg1;
- (void)clearRecordDates;
- (void)clearThresholdValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)expectedResultType;
- (id)expectedResultTypeAsString:(int)arg1;
- (bool)hasExpectedResultType;
- (bool)hasIntentMetadata;
- (bool)hasObjectType;
- (bool)hasQuestionType;
- (bool)hasUnit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)objectType;
- (id)objectTypeAsString:(int)arg1;
- (int)questionType;
- (id)questionTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordDateAtIndex:(unsigned long long)arg1;
- (id)recordDates;
- (unsigned long long)recordDatesCount;
- (void)setExpectedResultType:(int)arg1;
- (void)setHasExpectedResultType:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setHasQuestionType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setQuestionType:(int)arg1;
- (void)setRecordDates:(id)arg1;
- (void)setThresholdValues:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)thresholdValues;
- (id)thresholdValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)thresholdValuesCount;
- (id)unit;
- (void)writeTo:(id)arg1;

@end

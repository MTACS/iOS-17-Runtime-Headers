
@interface NLXSchemaMARRSRepetitionDetectionEvaluated : SISchemaInstrumentationMessage {
    float  _fullRepetitionConfidence;
    struct { 
        unsigned int repetitionType : 1; 
        unsigned int ruleType : 1; 
        unsigned int noRepetitionConfidence : 1; 
        unsigned int fullRepetitionConfidence : 1; 
        unsigned int partialRepetitionConfidence : 1; 
    }  _has;
    float  _noRepetitionConfidence;
    float  _partialRepetitionConfidence;
    int  _repetitionType;
    int  _ruleType;
}

@property (nonatomic) float fullRepetitionConfidence;
@property (nonatomic) bool hasFullRepetitionConfidence;
@property (nonatomic) bool hasNoRepetitionConfidence;
@property (nonatomic) bool hasPartialRepetitionConfidence;
@property (nonatomic) bool hasRepetitionType;
@property (nonatomic) bool hasRuleType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float noRepetitionConfidence;
@property (nonatomic) float partialRepetitionConfidence;
@property (nonatomic) int repetitionType;
@property (nonatomic) int ruleType;

- (void)deleteFullRepetitionConfidence;
- (void)deleteNoRepetitionConfidence;
- (void)deletePartialRepetitionConfidence;
- (void)deleteRepetitionType;
- (void)deleteRuleType;
- (id)dictionaryRepresentation;
- (float)fullRepetitionConfidence;
- (bool)hasFullRepetitionConfidence;
- (bool)hasNoRepetitionConfidence;
- (bool)hasPartialRepetitionConfidence;
- (bool)hasRepetitionType;
- (bool)hasRuleType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)noRepetitionConfidence;
- (float)partialRepetitionConfidence;
- (bool)readFrom:(id)arg1;
- (int)repetitionType;
- (int)ruleType;
- (void)setFullRepetitionConfidence:(float)arg1;
- (void)setHasFullRepetitionConfidence:(bool)arg1;
- (void)setHasNoRepetitionConfidence:(bool)arg1;
- (void)setHasPartialRepetitionConfidence:(bool)arg1;
- (void)setHasRepetitionType:(bool)arg1;
- (void)setHasRuleType:(bool)arg1;
- (void)setNoRepetitionConfidence:(float)arg1;
- (void)setPartialRepetitionConfidence:(float)arg1;
- (void)setRepetitionType:(int)arg1;
- (void)setRuleType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

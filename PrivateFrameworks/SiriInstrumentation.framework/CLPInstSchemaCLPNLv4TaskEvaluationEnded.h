
@interface CLPInstSchemaCLPNLv4TaskEvaluationEnded : SISchemaInstrumentationMessage {
    double  _accuracyOnAnyUserParse;
    double  _accuracyOnTheFirstUserParseCount;
    unsigned int  _evaluationCount;
    struct { 
        unsigned int accuracyOnTheFirstUserParseCount : 1; 
        unsigned int accuracyOnAnyUserParse : 1; 
        unsigned int evaluationCount : 1; 
    }  _has;
}

@property (nonatomic) double accuracyOnAnyUserParse;
@property (nonatomic) double accuracyOnTheFirstUserParseCount;
@property (nonatomic) unsigned int evaluationCount;
@property (nonatomic) bool hasAccuracyOnAnyUserParse;
@property (nonatomic) bool hasAccuracyOnTheFirstUserParseCount;
@property (nonatomic) bool hasEvaluationCount;
@property (nonatomic, readonly) NSData *jsonData;

- (double)accuracyOnAnyUserParse;
- (double)accuracyOnTheFirstUserParseCount;
- (void)deleteAccuracyOnAnyUserParse;
- (void)deleteAccuracyOnTheFirstUserParseCount;
- (void)deleteEvaluationCount;
- (id)dictionaryRepresentation;
- (unsigned int)evaluationCount;
- (bool)hasAccuracyOnAnyUserParse;
- (bool)hasAccuracyOnTheFirstUserParseCount;
- (bool)hasEvaluationCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAccuracyOnAnyUserParse:(double)arg1;
- (void)setAccuracyOnTheFirstUserParseCount:(double)arg1;
- (void)setEvaluationCount:(unsigned int)arg1;
- (void)setHasAccuracyOnAnyUserParse:(bool)arg1;
- (void)setHasAccuracyOnTheFirstUserParseCount:(bool)arg1;
- (void)setHasEvaluationCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

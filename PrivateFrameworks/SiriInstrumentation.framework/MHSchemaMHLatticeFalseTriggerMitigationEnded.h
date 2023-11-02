
@interface MHSchemaMHLatticeFalseTriggerMitigationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int score : 1; 
        unsigned int threshold : 1; 
    }  _has;
    float  _score;
    float  _threshold;
}

@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float score;
@property (nonatomic) float threshold;

- (void)deleteScore;
- (void)deleteThreshold;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (bool)hasThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setHasScore:(bool)arg1;
- (void)setHasThreshold:(bool)arg1;
- (void)setScore:(float)arg1;
- (void)setThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)threshold;
- (void)writeTo:(id)arg1;

@end

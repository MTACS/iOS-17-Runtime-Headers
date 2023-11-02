
@interface USOSchemaUSOAsrAlternativeTier1 : SISchemaInstrumentationMessage {
    NSString * _alternative;
    struct { 
        unsigned int probability : 1; 
    }  _has;
    bool  _hasAlternative;
    float  _probability;
}

@property (nonatomic, copy) NSString *alternative;
@property (nonatomic) bool hasAlternative;
@property (nonatomic) bool hasProbability;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float probability;

- (void).cxx_destruct;
- (id)alternative;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAlternative;
- (void)deleteProbability;
- (id)dictionaryRepresentation;
- (bool)hasAlternative;
- (bool)hasProbability;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)probability;
- (bool)readFrom:(id)arg1;
- (void)setAlternative:(id)arg1;
- (void)setHasAlternative:(bool)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setProbability:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

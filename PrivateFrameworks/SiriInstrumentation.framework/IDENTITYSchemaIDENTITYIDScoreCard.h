
@interface IDENTITYSchemaIDENTITYIDScoreCard : SISchemaInstrumentationMessage {
    int  _classification;
    struct { 
        unsigned int classification : 1; 
    }  _has;
    NSArray * _identityScores;
}

@property (nonatomic) int classification;
@property (nonatomic) bool hasClassification;
@property (nonatomic, copy) NSArray *identityScores;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addIdentityScores:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)classification;
- (void)clearIdentityScores;
- (void)deleteClassification;
- (void)deleteIdentityScores;
- (id)dictionaryRepresentation;
- (bool)hasClassification;
- (unsigned long long)hash;
- (id)identityScores;
- (id)identityScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)identityScoresCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setClassification:(int)arg1;
- (void)setHasClassification:(bool)arg1;
- (void)setIdentityScores:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

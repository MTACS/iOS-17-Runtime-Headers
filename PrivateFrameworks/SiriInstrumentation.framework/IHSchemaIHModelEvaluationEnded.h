
@interface IHSchemaIHModelEvaluationEnded : SISchemaInstrumentationMessage {
    bool  _hasScore;
    IHSchemaIHScore * _score;
}

@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IHSchemaIHScore *score;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteScore;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

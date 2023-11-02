
@interface ODMSiriSchemaODMSiriTurnRestatementScoresReported : SISchemaInstrumentationMessage {
    NSArray * _siriTurnRestatementScores;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *siriTurnRestatementScores;

- (void).cxx_destruct;
- (void)addSiriTurnRestatementScores:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSiriTurnRestatementScores;
- (void)deleteSiriTurnRestatementScores;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSiriTurnRestatementScores:(id)arg1;
- (id)siriTurnRestatementScores;
- (id)siriTurnRestatementScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)siriTurnRestatementScoresCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

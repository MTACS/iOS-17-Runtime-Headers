
@interface IDENTITYSchemaIDENTITYFirstVoiceObservationSubmitted : SISchemaInstrumentationMessage {
    bool  _hasVoiceScoreCard;
    IDENTITYSchemaIDENTITYVoiceScoreCard * _voiceScoreCard;
}

@property (nonatomic) bool hasVoiceScoreCard;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYVoiceScoreCard *voiceScoreCard;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteVoiceScoreCard;
- (id)dictionaryRepresentation;
- (bool)hasVoiceScoreCard;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasVoiceScoreCard:(bool)arg1;
- (void)setVoiceScoreCard:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceScoreCard;
- (void)writeTo:(id)arg1;

@end

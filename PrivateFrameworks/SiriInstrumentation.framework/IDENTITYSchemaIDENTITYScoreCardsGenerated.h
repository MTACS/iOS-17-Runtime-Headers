
@interface IDENTITYSchemaIDENTITYScoreCardsGenerated : SISchemaInstrumentationMessage {
    bool  _hasIdentityScoreCard;
    bool  _hasVoiceScoreCard;
    IDENTITYSchemaIDENTITYIDScoreCard * _identityScoreCard;
    IDENTITYSchemaIDENTITYVoiceScoreCard * _voiceScoreCard;
}

@property (nonatomic) bool hasIdentityScoreCard;
@property (nonatomic) bool hasVoiceScoreCard;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYVoiceScoreCard *voiceScoreCard;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIdentityScoreCard;
- (void)deleteVoiceScoreCard;
- (id)dictionaryRepresentation;
- (bool)hasIdentityScoreCard;
- (bool)hasVoiceScoreCard;
- (unsigned long long)hash;
- (id)identityScoreCard;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentityScoreCard:(bool)arg1;
- (void)setHasVoiceScoreCard:(bool)arg1;
- (void)setIdentityScoreCard:(id)arg1;
- (void)setVoiceScoreCard:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceScoreCard;
- (void)writeTo:(id)arg1;

@end

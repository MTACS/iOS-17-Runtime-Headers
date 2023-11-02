
@interface IDENTITYSchemaIDENTITYFirstIdentityReceived : SISchemaInstrumentationMessage {
    bool  _hasIdentityScoreCard;
    IDENTITYSchemaIDENTITYIDScoreCard * _identityScoreCard;
}

@property (nonatomic) bool hasIdentityScoreCard;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIdentityScoreCard;
- (id)dictionaryRepresentation;
- (bool)hasIdentityScoreCard;
- (unsigned long long)hash;
- (id)identityScoreCard;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentityScoreCard:(bool)arg1;
- (void)setIdentityScoreCard:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

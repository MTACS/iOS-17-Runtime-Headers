
@interface NLXSchemaCDMUserRejected : SISchemaInstrumentationMessage {
    bool  _hasOfferId;
    SISchemaUUID * _offerId;
}

@property (nonatomic) bool hasOfferId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *offerId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOfferId;
- (id)dictionaryRepresentation;
- (bool)hasOfferId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)offerId;
- (bool)readFrom:(id)arg1;
- (void)setHasOfferId:(bool)arg1;
- (void)setOfferId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

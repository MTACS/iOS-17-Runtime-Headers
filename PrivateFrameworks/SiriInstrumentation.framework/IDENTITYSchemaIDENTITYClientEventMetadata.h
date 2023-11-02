
@interface IDENTITYSchemaIDENTITYClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasIdentityId;
    SISchemaUUID * _identityId;
}

@property (nonatomic) bool hasIdentityId;
@property (nonatomic, retain) SISchemaUUID *identityId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIdentityId;
- (id)dictionaryRepresentation;
- (bool)hasIdentityId;
- (unsigned long long)hash;
- (id)identityId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentityId:(bool)arg1;
- (void)setIdentityId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

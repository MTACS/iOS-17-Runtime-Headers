
@interface SUGSchemaSUGClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSugId;
    SISchemaUUID * _sugId;
}

@property (nonatomic) bool hasSugId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sugId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSugId;
- (id)dictionaryRepresentation;
- (bool)hasSugId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSugId:(bool)arg1;
- (void)setSugId:(id)arg1;
- (id)sugId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

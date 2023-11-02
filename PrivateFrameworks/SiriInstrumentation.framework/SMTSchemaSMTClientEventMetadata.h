
@interface SMTSchemaSMTClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSmtId;
    SISchemaUUID * _smtId;
}

@property (nonatomic) bool hasSmtId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *smtId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSmtId;
- (id)dictionaryRepresentation;
- (bool)hasSmtId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSmtId:(bool)arg1;
- (void)setSmtId:(id)arg1;
- (id)smtId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

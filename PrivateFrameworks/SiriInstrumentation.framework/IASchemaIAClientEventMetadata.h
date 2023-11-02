
@interface IASchemaIAClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasIaId;
    SISchemaUUID * _iaId;
}

@property (nonatomic) bool hasIaId;
@property (nonatomic, retain) SISchemaUUID *iaId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIaId;
- (id)dictionaryRepresentation;
- (bool)hasIaId;
- (unsigned long long)hash;
- (id)iaId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIaId:(bool)arg1;
- (void)setIaId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end


@interface CDASchemaCDAClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _cdaId;
    bool  _hasCdaId;
}

@property (nonatomic, retain) SISchemaUUID *cdaId;
@property (nonatomic) bool hasCdaId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cdaId;
- (void)deleteCdaId;
- (id)dictionaryRepresentation;
- (bool)hasCdaId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCdaId:(id)arg1;
- (void)setHasCdaId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

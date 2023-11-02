
@interface NETSchemaNETClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasNetId;
    SISchemaUUID * _netId;
}

@property (nonatomic) bool hasNetId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *netId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteNetId;
- (id)dictionaryRepresentation;
- (bool)hasNetId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)netId;
- (bool)readFrom:(id)arg1;
- (void)setHasNetId:(bool)arg1;
- (void)setNetId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

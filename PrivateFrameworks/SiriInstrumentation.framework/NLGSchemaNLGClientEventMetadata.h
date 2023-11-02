
@interface NLGSchemaNLGClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasNlgId;
    SISchemaUUID * _nlgId;
}

@property (nonatomic) bool hasNlgId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *nlgId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteNlgId;
- (id)dictionaryRepresentation;
- (bool)hasNlgId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nlgId;
- (bool)readFrom:(id)arg1;
- (void)setHasNlgId:(bool)arg1;
- (void)setNlgId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

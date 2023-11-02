
@interface ANCSchemaANCServerEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _ancId;
    bool  _hasAncId;
}

@property (nonatomic, retain) SISchemaUUID *ancId;
@property (nonatomic) bool hasAncId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)ancId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAncId;
- (id)dictionaryRepresentation;
- (bool)hasAncId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAncId:(id)arg1;
- (void)setHasAncId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end


@interface CLPInstSchemaCLPClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _clpId;
    bool  _hasClpId;
}

@property (nonatomic, retain) SISchemaUUID *clpId;
@property (nonatomic) bool hasClpId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)clpId;
- (void)deleteClpId;
- (id)dictionaryRepresentation;
- (bool)hasClpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setClpId:(id)arg1;
- (void)setHasClpId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

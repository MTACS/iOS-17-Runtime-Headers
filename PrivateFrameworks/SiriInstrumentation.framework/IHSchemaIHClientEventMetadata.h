
@interface IHSchemaIHClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasIhId;
    SISchemaUUID * _ihId;
}

@property (nonatomic) bool hasIhId;
@property (nonatomic, retain) SISchemaUUID *ihId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIhId;
- (id)dictionaryRepresentation;
- (bool)hasIhId;
- (unsigned long long)hash;
- (id)ihId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIhId:(bool)arg1;
- (void)setIhId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

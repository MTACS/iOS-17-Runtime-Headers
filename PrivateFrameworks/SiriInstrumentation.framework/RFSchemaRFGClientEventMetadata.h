
@interface RFSchemaRFGClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRfId;
    SISchemaUUID * _rfId;
}

@property (nonatomic) bool hasRfId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *rfId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRfId;
- (id)dictionaryRepresentation;
- (bool)hasRfId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)rfId;
- (void)setHasRfId:(bool)arg1;
- (void)setRfId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

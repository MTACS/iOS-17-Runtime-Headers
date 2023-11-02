
@interface SIRISETUPSchemaSIRISETUPClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSiriSetupId;
    SISchemaUUID * _siriSetupId;
}

@property (nonatomic) bool hasSiriSetupId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *siriSetupId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSiriSetupId;
- (id)dictionaryRepresentation;
- (bool)hasSiriSetupId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriSetupId:(bool)arg1;
- (void)setSiriSetupId:(id)arg1;
- (id)siriSetupId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

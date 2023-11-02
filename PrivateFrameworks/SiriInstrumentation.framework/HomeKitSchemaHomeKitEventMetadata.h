
@interface HomeKitSchemaHomeKitEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasHkId;
    SISchemaUUID * _hkId;
}

@property (nonatomic) bool hasHkId;
@property (nonatomic, retain) SISchemaUUID *hkId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteHkId;
- (id)dictionaryRepresentation;
- (bool)hasHkId;
- (unsigned long long)hash;
- (id)hkId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHkId:(bool)arg1;
- (void)setHkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

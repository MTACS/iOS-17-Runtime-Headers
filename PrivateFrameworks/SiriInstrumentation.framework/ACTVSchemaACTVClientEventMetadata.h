
@interface ACTVSchemaACTVClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _activationEventId;
    bool  _hasActivationEventId;
}

@property (nonatomic, retain) SISchemaUUID *activationEventId;
@property (nonatomic) bool hasActivationEventId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)activationEventId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteActivationEventId;
- (id)dictionaryRepresentation;
- (bool)hasActivationEventId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActivationEventId:(id)arg1;
- (void)setHasActivationEventId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

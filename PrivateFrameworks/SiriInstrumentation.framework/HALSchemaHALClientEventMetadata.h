
@interface HALSchemaHALClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _halId;
    bool  _hasHalId;
    bool  _hasRequestId;
    SISchemaUUID * _requestId;
}

@property (nonatomic, retain) SISchemaUUID *halId;
@property (nonatomic) bool hasHalId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteHalId;
- (void)deleteRequestId;
- (id)dictionaryRepresentation;
- (id)halId;
- (bool)hasHalId;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setHalId:(id)arg1;
- (void)setHasHalId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

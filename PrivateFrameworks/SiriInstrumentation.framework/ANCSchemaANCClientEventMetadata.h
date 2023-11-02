
@interface ANCSchemaANCClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _ancId;
    bool  _hasAncId;
    bool  _hasRequestId;
    SISchemaUUID * _requestId;
}

@property (nonatomic, retain) SISchemaUUID *ancId;
@property (nonatomic) bool hasAncId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;

- (void).cxx_destruct;
- (id)ancId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAncId;
- (void)deleteRequestId;
- (id)dictionaryRepresentation;
- (bool)hasAncId;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setAncId:(id)arg1;
- (void)setHasAncId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

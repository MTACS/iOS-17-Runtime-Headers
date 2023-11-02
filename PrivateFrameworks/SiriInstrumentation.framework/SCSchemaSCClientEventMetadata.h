
@interface SCSchemaSCClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRequestId;
    bool  _hasScId;
    SISchemaUUID * _requestId;
    SISchemaUUID * _scId;
}

@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasScId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, retain) SISchemaUUID *scId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRequestId;
- (void)deleteScId;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasScId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)scId;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasScId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setScId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end


@interface SICSchemaSICClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRequestId;
    bool  _hasSicId;
    SISchemaUUID * _requestId;
    SISchemaUUID * _sicId;
}

@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasSicId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, retain) SISchemaUUID *sicId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRequestId;
- (void)deleteSicId;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasSicId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasSicId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSicId:(id)arg1;
- (id)sicId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

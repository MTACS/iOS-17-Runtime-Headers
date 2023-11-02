
@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage {
    USPSchemaUSPMeasurementContext * _context;
    bool  _hasContext;
    bool  _hasSutFingerprint;
    bool  _hasUspId;
    SISchemaUUID * _sutFingerprint;
    SISchemaUUID * _uspId;
}

@property (nonatomic, retain) USPSchemaUSPMeasurementContext *context;
@property (nonatomic) bool hasContext;
@property (nonatomic) bool hasSutFingerprint;
@property (nonatomic) bool hasUspId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sutFingerprint;
@property (nonatomic, retain) SISchemaUUID *uspId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)context;
- (void)deleteContext;
- (void)deleteSutFingerprint;
- (void)deleteUspId;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasSutFingerprint;
- (bool)hasUspId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasContext:(bool)arg1;
- (void)setHasSutFingerprint:(bool)arg1;
- (void)setHasUspId:(bool)arg1;
- (void)setSutFingerprint:(id)arg1;
- (void)setUspId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)sutFingerprint;
- (id)uspId;
- (void)writeTo:(id)arg1;

@end

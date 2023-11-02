
@interface DODMLASRSchemaDODMLASRAudioFileResult : SISchemaInstrumentationMessage {
    SISchemaUUID * _asrId;
    NSArray * _decodingResults;
    bool  _hasAsrId;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, retain) SISchemaUUID *asrId;
@property (nonatomic, copy) NSArray *decodingResults;
@property (nonatomic) bool hasAsrId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addDecodingResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrId;
- (void)clearDecodingResults;
- (id)decodingResults;
- (id)decodingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)decodingResultsCount;
- (void)deleteAsrId;
- (void)deleteDecodingResults;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setDecodingResults:(id)arg1;
- (void)setHasAsrId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

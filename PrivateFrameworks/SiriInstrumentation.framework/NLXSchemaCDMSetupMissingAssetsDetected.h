
@interface NLXSchemaCDMSetupMissingAssetsDetected : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    bool  _hasContextId;
    NSArray * _servicesMissingAssets;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContextId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *servicesMissingAssets;

- (void).cxx_destruct;
- (void)addServicesMissingAsset:(int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearServicesMissingAsset;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteServicesMissingAsset;
- (id)dictionaryRepresentation;
- (bool)hasContextId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)servicesMissingAssetAtIndex:(unsigned long long)arg1;
- (unsigned long long)servicesMissingAssetCount;
- (id)servicesMissingAssets;
- (void)setContextId:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setServicesMissingAssets:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

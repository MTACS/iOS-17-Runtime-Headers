
@interface GRRSchemaGRRHypothesisRankingStarted : SISchemaInstrumentationMessage {
    NSString * _assetVersion;
    NSArray * _featureFlags;
    bool  _hasAssetVersion;
}

@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic, copy) NSArray *featureFlags;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addFeatureFlags:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assetVersion;
- (void)clearFeatureFlags;
- (void)deleteAssetVersion;
- (void)deleteFeatureFlags;
- (id)dictionaryRepresentation;
- (id)featureFlags;
- (id)featureFlagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureFlagsCount;
- (bool)hasAssetVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setFeatureFlags:(id)arg1;
- (void)setHasAssetVersion:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

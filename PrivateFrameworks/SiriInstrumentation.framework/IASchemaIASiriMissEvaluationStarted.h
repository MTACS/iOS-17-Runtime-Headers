
@interface IASchemaIASiriMissEvaluationStarted : SISchemaInstrumentationMessage {
    NSString * _assetVersion;
    bool  _hasAssetVersion;
}

@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)assetVersion;
- (void)deleteAssetVersion;
- (id)dictionaryRepresentation;
- (bool)hasAssetVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setHasAssetVersion:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end


@interface NLXSchemaCDMAssetsReported : SISchemaInstrumentationMessage {
    NSArray * _assets;
}

@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)deleteAssets;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssets:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

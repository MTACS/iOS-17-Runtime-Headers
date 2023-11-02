
@interface SISchemaAsset : SISchemaInstrumentationMessage {
    int  _assetLocale;
    NSString * _assetName;
    SISchemaVersion * _assetVersion;
    struct { 
        unsigned int assetLocale : 1; 
    }  _has;
    bool  _hasAssetName;
    bool  _hasAssetVersion;
    bool  _hasTrialNamespace;
    NSString * _trialNamespace;
}

@property (nonatomic) int assetLocale;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, retain) SISchemaVersion *assetVersion;
@property (nonatomic) bool hasAssetLocale;
@property (nonatomic) bool hasAssetName;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasTrialNamespace;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *trialNamespace;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)assetLocale;
- (id)assetName;
- (id)assetVersion;
- (void)deleteAssetLocale;
- (void)deleteAssetName;
- (void)deleteAssetVersion;
- (void)deleteTrialNamespace;
- (id)dictionaryRepresentation;
- (bool)hasAssetLocale;
- (bool)hasAssetName;
- (bool)hasAssetVersion;
- (bool)hasTrialNamespace;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetLocale:(int)arg1;
- (void)setAssetName:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setHasAssetLocale:(bool)arg1;
- (void)setHasAssetName:(bool)arg1;
- (void)setHasAssetVersion:(bool)arg1;
- (void)setHasTrialNamespace:(bool)arg1;
- (void)setTrialNamespace:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trialNamespace;
- (void)writeTo:(id)arg1;

@end

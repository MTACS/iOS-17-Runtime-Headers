
@interface UAFSchemaUAFAssetSet : SISchemaInstrumentationMessage {
    NSString * _assetSetId;
    NSString * _assetSetName;
    NSString * _assetType;
    NSArray * _assets;
    NSString * _audienceId;
    bool  _hasAssetSetId;
    bool  _hasAssetSetName;
    bool  _hasAssetType;
    bool  _hasAudienceId;
    NSArray * _mobileAssetDownloadErrorCodeFrequencys;
}

@property (nonatomic, copy) NSString *assetSetId;
@property (nonatomic, copy) NSString *assetSetName;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, copy) NSString *audienceId;
@property (nonatomic) bool hasAssetSetId;
@property (nonatomic) bool hasAssetSetName;
@property (nonatomic) bool hasAssetType;
@property (nonatomic) bool hasAudienceId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *mobileAssetDownloadErrorCodeFrequencys;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (void)addMobileAssetDownloadErrorCodeFrequency:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assetSetId;
- (id)assetSetName;
- (id)assetType;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (id)audienceId;
- (void)clearAssets;
- (void)clearMobileAssetDownloadErrorCodeFrequency;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssetType;
- (void)deleteAssets;
- (void)deleteAudienceId;
- (void)deleteMobileAssetDownloadErrorCodeFrequency;
- (id)dictionaryRepresentation;
- (bool)hasAssetSetId;
- (bool)hasAssetSetName;
- (bool)hasAssetType;
- (bool)hasAudienceId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mobileAssetDownloadErrorCodeFrequencyAtIndex:(unsigned long long)arg1;
- (unsigned long long)mobileAssetDownloadErrorCodeFrequencyCount;
- (id)mobileAssetDownloadErrorCodeFrequencys;
- (bool)readFrom:(id)arg1;
- (void)setAssetSetId:(id)arg1;
- (void)setAssetSetName:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setAudienceId:(id)arg1;
- (void)setHasAssetSetId:(bool)arg1;
- (void)setHasAssetSetName:(bool)arg1;
- (void)setHasAssetType:(bool)arg1;
- (void)setHasAudienceId:(bool)arg1;
- (void)setMobileAssetDownloadErrorCodeFrequencys:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

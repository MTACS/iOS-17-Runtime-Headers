
@interface UAFSchemaUAFAsset : SISchemaInstrumentationMessage {
    int  _assetLocale;
    NSString * _assetName;
    unsigned int  _assetSizeOnDisk;
    int  _assetSource;
    NSString * _assetSpecifier;
    NSString * _assetVersion;
    struct { 
        unsigned int assetLocale : 1; 
        unsigned int assetSource : 1; 
        unsigned int assetSizeOnDisk : 1; 
        unsigned int isAssetPathValid : 1; 
    }  _has;
    bool  _hasAssetName;
    bool  _hasAssetSpecifier;
    bool  _hasAssetVersion;
    bool  _isAssetPathValid;
}

@property (nonatomic) int assetLocale;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic) unsigned int assetSizeOnDisk;
@property (nonatomic) int assetSource;
@property (nonatomic, copy) NSString *assetSpecifier;
@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic) bool hasAssetLocale;
@property (nonatomic) bool hasAssetName;
@property (nonatomic) bool hasAssetSizeOnDisk;
@property (nonatomic) bool hasAssetSource;
@property (nonatomic) bool hasAssetSpecifier;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasIsAssetPathValid;
@property (nonatomic) bool isAssetPathValid;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)assetLocale;
- (id)assetName;
- (unsigned int)assetSizeOnDisk;
- (int)assetSource;
- (id)assetSpecifier;
- (id)assetVersion;
- (void)deleteAssetLocale;
- (void)deleteAssetName;
- (void)deleteAssetSizeOnDisk;
- (void)deleteAssetSource;
- (void)deleteAssetSpecifier;
- (void)deleteAssetVersion;
- (void)deleteIsAssetPathValid;
- (id)dictionaryRepresentation;
- (bool)hasAssetLocale;
- (bool)hasAssetName;
- (bool)hasAssetSizeOnDisk;
- (bool)hasAssetSource;
- (bool)hasAssetSpecifier;
- (bool)hasAssetVersion;
- (bool)hasIsAssetPathValid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAssetPathValid;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetLocale:(int)arg1;
- (void)setAssetName:(id)arg1;
- (void)setAssetSizeOnDisk:(unsigned int)arg1;
- (void)setAssetSource:(int)arg1;
- (void)setAssetSpecifier:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setHasAssetLocale:(bool)arg1;
- (void)setHasAssetName:(bool)arg1;
- (void)setHasAssetSizeOnDisk:(bool)arg1;
- (void)setHasAssetSource:(bool)arg1;
- (void)setHasAssetSpecifier:(bool)arg1;
- (void)setHasAssetVersion:(bool)arg1;
- (void)setHasIsAssetPathValid:(bool)arg1;
- (void)setIsAssetPathValid:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

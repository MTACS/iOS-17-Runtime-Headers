
@interface CPLMemoryAssetList : PBCodable <NSCopying> {
    NSMutableArray * _assets;
    struct { 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _version;
}

@property (nonatomic, retain) NSMutableArray *assets;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)assetType;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assetAtIndex:(unsigned long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

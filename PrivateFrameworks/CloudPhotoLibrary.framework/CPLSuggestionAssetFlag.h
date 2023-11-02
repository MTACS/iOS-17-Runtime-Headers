
@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {
    struct { 
        unsigned int isKeyAsset : 1; 
        unsigned int isRepresentative : 1; 
    }  _has;
    bool  _isKeyAsset;
    bool  _isRepresentative;
}

@property (nonatomic) bool hasIsKeyAsset;
@property (nonatomic) bool hasIsRepresentative;
@property (nonatomic) bool isKeyAsset;
@property (nonatomic) bool isRepresentative;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsKeyAsset;
- (bool)hasIsRepresentative;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKeyAsset;
- (bool)isRepresentative;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsKeyAsset:(bool)arg1;
- (void)setHasIsRepresentative:(bool)arg1;
- (void)setIsKeyAsset:(bool)arg1;
- (void)setIsRepresentative:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

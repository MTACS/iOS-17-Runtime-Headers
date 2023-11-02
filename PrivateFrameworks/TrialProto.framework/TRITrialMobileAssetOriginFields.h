
@interface TRITrialMobileAssetOriginFields : PBCodable <NSCopying> {
    struct { 
        unsigned int isMobileAsset : 1; 
    }  _has;
    bool  _isMobileAsset;
}

@property (nonatomic) bool hasIsMobileAsset;
@property (nonatomic) bool isMobileAsset;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsMobileAsset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMobileAsset;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsMobileAsset:(bool)arg1;
- (void)setIsMobileAsset:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

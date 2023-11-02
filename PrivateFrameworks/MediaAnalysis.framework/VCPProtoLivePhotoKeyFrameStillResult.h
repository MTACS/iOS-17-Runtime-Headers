
@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    bool  _hasFlash;
    float  _sharpness;
    float  _stillTime;
    float  _textureness;
}

@property (nonatomic) bool hasFlash;
@property (nonatomic) float sharpness;
@property (nonatomic) float stillTime;
@property (nonatomic) float textureness;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (bool)hasFlash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasFlash:(bool)arg1;
- (void)setSharpness:(float)arg1;
- (void)setStillTime:(float)arg1;
- (void)setTextureness:(float)arg1;
- (float)sharpness;
- (float)stillTime;
- (float)textureness;
- (void)writeTo:(id)arg1;

@end

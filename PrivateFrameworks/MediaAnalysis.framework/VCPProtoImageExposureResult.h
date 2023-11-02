
@interface VCPProtoImageExposureResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _exposure;
    struct { 
        unsigned int underExpose : 1; 
    }  _has;
    float  _underExpose;
}

@property (nonatomic) float exposure;
@property (nonatomic) bool hasUnderExpose;
@property (nonatomic) float underExpose;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (float)exposure;
- (bool)hasUnderExpose;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExposure:(float)arg1;
- (void)setHasUnderExpose:(bool)arg1;
- (void)setUnderExpose:(float)arg1;
- (float)underExpose;
- (void)writeTo:(id)arg1;

@end

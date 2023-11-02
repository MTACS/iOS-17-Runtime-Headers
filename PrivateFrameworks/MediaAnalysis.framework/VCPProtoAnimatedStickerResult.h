
@interface VCPProtoAnimatedStickerResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _stickerScore;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) float stickerScore;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStickerScore:(float)arg1;
- (void)setTimeRange:(id)arg1;
- (float)stickerScore;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

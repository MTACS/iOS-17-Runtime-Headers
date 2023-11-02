
@interface VCPProtoMovieHighlightResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    NSData * _colorNormalizationBlob;
    float  _curationScore;
    VCPProtoVideoKeyFrame * _keyFrame;
    VCPProtoBounds * _playbackCrop;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic, retain) NSData *colorNormalizationBlob;
@property (nonatomic) float curationScore;
@property (nonatomic, readonly) bool hasColorNormalizationBlob;
@property (nonatomic, retain) VCPProtoVideoKeyFrame *keyFrame;
@property (nonatomic, retain) VCPProtoBounds *playbackCrop;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)colorNormalizationBlob;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)curationScore;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (bool)hasColorNormalizationBlob;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyFrame;
- (void)mergeFrom:(id)arg1;
- (id)playbackCrop;
- (bool)readFrom:(id)arg1;
- (void)setColorNormalizationBlob:(id)arg1;
- (void)setCurationScore:(float)arg1;
- (void)setKeyFrame:(id)arg1;
- (void)setPlaybackCrop:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

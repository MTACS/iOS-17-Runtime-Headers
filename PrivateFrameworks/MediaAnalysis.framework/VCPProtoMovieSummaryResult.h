
@interface VCPProtoMovieSummaryResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    bool  _autoPlayable;
    float  _curationScore;
    VCPProtoVideoKeyFrame * _keyFrame;
    VCPProtoBounds * _playbackCrop;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) bool autoPlayable;
@property (nonatomic) float curationScore;
@property (nonatomic, readonly) bool hasKeyFrame;
@property (nonatomic, readonly) bool hasPlaybackCrop;
@property (nonatomic, retain) VCPProtoVideoKeyFrame *keyFrame;
@property (nonatomic, retain) VCPProtoBounds *playbackCrop;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)autoPlayable;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)curationScore;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (bool)hasKeyFrame;
- (bool)hasPlaybackCrop;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyFrame;
- (void)mergeFrom:(id)arg1;
- (id)playbackCrop;
- (bool)readFrom:(id)arg1;
- (void)setAutoPlayable:(bool)arg1;
- (void)setCurationScore:(float)arg1;
- (void)setKeyFrame:(id)arg1;
- (void)setPlaybackCrop:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

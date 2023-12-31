
@interface VCPProtoMovieSubtleMotionResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _actionScore;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) float actionScore;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (float)actionScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionScore:(float)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

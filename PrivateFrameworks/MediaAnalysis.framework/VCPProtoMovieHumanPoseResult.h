
@interface VCPProtoMovieHumanPoseResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _bounds;
    float  _confidence;
    int  _flags;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic, retain) VCPProtoBounds *bounds;
@property (nonatomic) float confidence;
@property (nonatomic) int flags;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)bounds;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (int)flags;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setFlags:(int)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end


@interface VCPProtoMovieLoudnessResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    double  _energy;
    double  _peak;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) double energy;
@property (nonatomic) double peak;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)energy;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)peak;
- (bool)readFrom:(id)arg1;
- (void)setEnergy:(double)arg1;
- (void)setPeak:(double)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

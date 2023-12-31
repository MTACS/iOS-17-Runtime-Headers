
@interface VCPProtoMovieOrientationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    int  _orientation;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) int orientation;
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
- (int)orientation;
- (bool)readFrom:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

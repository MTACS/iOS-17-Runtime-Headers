
@interface VCPProtoMovieMovingObjectResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    NSMutableArray * _bounds;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic, retain) NSMutableArray *bounds;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (Class)boundsType;
+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addBounds:(id)arg1;
- (id)bounds;
- (id)boundsAtIndex:(unsigned long long)arg1;
- (unsigned long long)boundsCount;
- (void)clearBounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end

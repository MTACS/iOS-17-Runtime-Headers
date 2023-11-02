
@interface WiFiAnalyticsAWDWiFiTDM : PBCodable <NSCopying> {
    NSMutableArray * _sliceStats;
}

@property (nonatomic, retain) NSMutableArray *sliceStats;

+ (Class)sliceStatsType;

- (void).cxx_destruct;
- (void)addSliceStats:(id)arg1;
- (void)clearSliceStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSliceStats:(id)arg1;
- (id)sliceStats;
- (id)sliceStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sliceStatsCount;
- (void)writeTo:(id)arg1;

@end

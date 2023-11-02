
@interface HKCodableStatisticsCollection : PBCodable <NSCopying> {
    NSMutableArray * _statistics;
    HKCodableDateComponents * _statisticsInterval;
}

@property (nonatomic, readonly) bool hasStatisticsInterval;
@property (nonatomic, retain) NSMutableArray *statistics;
@property (nonatomic, retain) HKCodableDateComponents *statisticsInterval;

+ (Class)statisticsType;

- (void).cxx_destruct;
- (void)addStatistics:(id)arg1;
- (void)clearStatistics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatisticsInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (id)statistics;
- (id)statisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)statisticsCount;
- (id)statisticsInterval;
- (void)writeTo:(id)arg1;

@end

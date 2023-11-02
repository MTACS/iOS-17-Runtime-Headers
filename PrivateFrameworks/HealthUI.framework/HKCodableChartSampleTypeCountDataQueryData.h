
@interface HKCodableChartSampleTypeCountDataQueryData : PBCodable <NSCopying> {
    NSMutableArray * _timePeriodToCounts;
}

@property (nonatomic, retain) NSMutableArray *timePeriodToCounts;

+ (Class)timePeriodToCountType;

- (void).cxx_destruct;
- (void)addTimePeriodToCount:(id)arg1;
- (void)clearTimePeriodToCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTimePeriodToCounts:(id)arg1;
- (id)timePeriodToCountAtIndex:(unsigned long long)arg1;
- (id)timePeriodToCounts;
- (unsigned long long)timePeriodToCountsCount;
- (void)writeTo:(id)arg1;

@end

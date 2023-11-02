
@interface BMSiriUserEngagementStatistics : BMEventBase <BMStoreData> {
    NSArray * _accumulatedAggregationStats;
    BMSiriUserEngagementStatisticsAccumulatedAggregationStats * _dailyAggregatedStats;
    BMSiriUserEngagementStatisticsUserEngagementStatsMetadata * _userEngagementStatsMetadata;
}

@property (nonatomic, readonly) NSArray *accumulatedAggregationStats;
@property (nonatomic, readonly) BMSiriUserEngagementStatisticsAccumulatedAggregationStats *dailyAggregatedStats;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMSiriUserEngagementStatisticsUserEngagementStatsMetadata *userEngagementStatsMetadata;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_accumulatedAggregationStatsJSONArray;
- (id)accumulatedAggregationStats;
- (id)dailyAggregatedStats;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUserEngagementStatsMetadata:(id)arg1 dailyAggregatedStats:(id)arg2 accumulatedAggregationStats:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)userEngagementStatsMetadata;
- (void)writeTo:(id)arg1;

@end

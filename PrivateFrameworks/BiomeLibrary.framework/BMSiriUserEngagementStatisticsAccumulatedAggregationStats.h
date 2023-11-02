
@interface BMSiriUserEngagementStatisticsAccumulatedAggregationStats : BMEventBase <BMStoreData> {
    double  _aggregationStartTimestamp;
    NSArray * _aggregationStats;
    NSString * _cohortType;
    bool  _hasAggregationStartTimestamp;
    bool  _hasIntendedRequestRatio;
    bool  _hasNumberOfDaysAggregation;
    double  _intendedRequestRatio;
    int  _numberOfDaysAggregation;
}

@property (nonatomic, readonly) double aggregationStartTimestamp;
@property (nonatomic, readonly) NSArray *aggregationStats;
@property (nonatomic, readonly) NSString *cohortType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAggregationStartTimestamp;
@property (nonatomic) bool hasIntendedRequestRatio;
@property (nonatomic) bool hasNumberOfDaysAggregation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double intendedRequestRatio;
@property (nonatomic, readonly) int numberOfDaysAggregation;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_aggregationStatsJSONArray;
- (double)aggregationStartTimestamp;
- (id)aggregationStats;
- (id)cohortType;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAggregationStartTimestamp;
- (bool)hasIntendedRequestRatio;
- (bool)hasNumberOfDaysAggregation;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAggregationStartTimestamp:(id)arg1 numberOfDaysAggregation:(id)arg2 aggregationStats:(id)arg3 cohortType:(id)arg4 intendedRequestRatio:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (double)intendedRequestRatio;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)numberOfDaysAggregation;
- (id)serialize;
- (void)setHasAggregationStartTimestamp:(bool)arg1;
- (void)setHasIntendedRequestRatio:(bool)arg1;
- (void)setHasNumberOfDaysAggregation:(bool)arg1;
- (void)writeTo:(id)arg1;

@end


@interface DNDSMetricsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSDate * _lastDailyHeartbeat;
    NSDate * _lastMonthlyHeartbeat;
    NSDate * _lastWeeklyHeartbeat;
    NSDictionary * _metricsByDay;
    NSDictionary * _metricsByMonth;
    NSDictionary * _metricsByWeek;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastDailyHeartbeat;
@property (nonatomic, readonly, copy) NSDate *lastMonthlyHeartbeat;
@property (nonatomic, readonly, copy) NSDate *lastWeeklyHeartbeat;
@property (nonatomic, readonly, copy) NSDictionary *metricsByDay;
@property (nonatomic, readonly, copy) NSDictionary *metricsByMonth;
@property (nonatomic, readonly, copy) NSDictionary *metricsByWeek;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithMetricsByDay:(id)arg1 lastDailyHeartbeat:(id)arg2 metricsByWeek:(id)arg3 lastWeeklyHeartbeat:(id)arg4 metricsByMonth:(id)arg5 lastMonthlyHeartbeat:(id)arg6;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lastDailyHeartbeat;
- (id)lastMonthlyHeartbeat;
- (id)lastWeeklyHeartbeat;
- (id)metricsByDay;
- (id)metricsByMonth;
- (id)metricsByWeek;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end

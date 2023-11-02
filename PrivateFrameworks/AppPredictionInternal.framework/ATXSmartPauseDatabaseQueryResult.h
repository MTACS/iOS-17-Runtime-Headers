
@interface ATXSmartPauseDatabaseQueryResult : NSObject {
    NSString * _bundleId;
    unsigned long long  _countLastDayNotifications;
    unsigned long long  _countLastDayPositiveEngagements;
    unsigned long long  _countLastFiveMinutesNotifications;
    unsigned long long  _countLastFiveMinutesPositiveEngagements;
    unsigned long long  _countLastHourNotifications;
    unsigned long long  _countLastHourPositiveEngagements;
    unsigned long long  _countLastWeekNotifications;
    unsigned long long  _countLastWeekPositiveEngagements;
    unsigned long long  _countNotifications;
    unsigned long long  _countPositiveEngagements;
    NSString * _threadId;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) unsigned long long countLastDayNotifications;
@property (nonatomic) unsigned long long countLastDayPositiveEngagements;
@property (nonatomic) unsigned long long countLastFiveMinutesNotifications;
@property (nonatomic) unsigned long long countLastFiveMinutesPositiveEngagements;
@property (nonatomic) unsigned long long countLastHourNotifications;
@property (nonatomic) unsigned long long countLastHourPositiveEngagements;
@property (nonatomic) unsigned long long countLastWeekNotifications;
@property (nonatomic) unsigned long long countLastWeekPositiveEngagements;
@property (nonatomic) unsigned long long countNotifications;
@property (nonatomic) unsigned long long countPositiveEngagements;
@property (nonatomic, retain) NSString *threadId;

+ (id)groupByBundleId:(id)arg1;

- (void).cxx_destruct;
- (id)bundleId;
- (unsigned long long)countLastDayNotifications;
- (unsigned long long)countLastDayPositiveEngagements;
- (unsigned long long)countLastFiveMinutesNotifications;
- (unsigned long long)countLastFiveMinutesPositiveEngagements;
- (unsigned long long)countLastHourNotifications;
- (unsigned long long)countLastHourPositiveEngagements;
- (unsigned long long)countLastWeekNotifications;
- (unsigned long long)countLastWeekPositiveEngagements;
- (unsigned long long)countNotifications;
- (unsigned long long)countPositiveEngagements;
- (id)initWithBundleId:(id)arg1 threadId:(id)arg2;
- (void)mergeWithOther:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCountLastDayNotifications:(unsigned long long)arg1;
- (void)setCountLastDayPositiveEngagements:(unsigned long long)arg1;
- (void)setCountLastFiveMinutesNotifications:(unsigned long long)arg1;
- (void)setCountLastFiveMinutesPositiveEngagements:(unsigned long long)arg1;
- (void)setCountLastHourNotifications:(unsigned long long)arg1;
- (void)setCountLastHourPositiveEngagements:(unsigned long long)arg1;
- (void)setCountLastWeekNotifications:(unsigned long long)arg1;
- (void)setCountLastWeekPositiveEngagements:(unsigned long long)arg1;
- (void)setCountNotifications:(unsigned long long)arg1;
- (void)setCountPositiveEngagements:(unsigned long long)arg1;
- (void)setThreadId:(id)arg1;
- (id)threadId;

@end

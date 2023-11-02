
@interface HKSleepAnalysisDataSourceContext : NSObject {
    long long  _chartType;
    long long  _timeScope;
}

@property (nonatomic) long long chartType;
@property (nonatomic) long long timeScope;

+ (id)sleepAnalysisDataSourceContextWithChartType:(long long)arg1 timeScope:(long long)arg2;

- (long long)chartType;
- (void)setChartType:(long long)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)timeScope;

@end


@interface IRStatisticsManager : NSObject {
    NSDate * _appLaunchDate;
    long long  _mode;
    NSDate * _modeDate;
    IRStatisticsDO * _statistics;
    IRServiceStore * _store;
    NSNumber * _timeToBannerInMilliSeconds;
}

@property (nonatomic, retain) NSDate *appLaunchDate;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSDate *modeDate;
@property (nonatomic, retain) IRStatisticsDO *statistics;
@property (nonatomic, retain) IRServiceStore *store;
@property (nonatomic, retain) NSNumber *timeToBannerInMilliSeconds;

- (void).cxx_destruct;
- (bool)_initStatistics;
- (bool)_isAllowedToCollectStatisticsForDate:(id)arg1;
- (id)appLaunchDate;
- (void)bannerContextWithDate:(id)arg1;
- (void)clearStatistics:(id)arg1;
- (void)contextChangedWithReason:(id)arg1 mode:(long long)arg2 miloPrediction:(id)arg3 date:(id)arg4;
- (void)event:(id)arg1 forCandidate:(id)arg2 inspections:(id)arg3 date:(id)arg4;
- (id)initWithStore:(id)arg1;
- (long long)mode;
- (id)modeDate;
- (void)setAppLaunchDate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setModeDate:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setTimeToBannerInMilliSeconds:(id)arg1;
- (id)statistics;
- (id)store;
- (id)timeToBannerInMilliSeconds;

@end

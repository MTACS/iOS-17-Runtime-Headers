
@interface HDHeadphoneExposureUpdateDoseResult : NSObject {
    HDHeadphoneExposureStatisticsResult * _statistics;
}

@property (nonatomic, retain) HDHeadphoneExposureStatisticsResult *statistics;

+ (id)resultForNoChange;
+ (id)resultForUpdate:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithStatistics:(id)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

@end


@interface HKSleepStageDurationChartPoint : HKSleepDurationChartPoint <HKSleepSleepChartPointUserInfoProvider> {
    double  _asleepCoreValue;
    double  _asleepDeepValue;
    double  _asleepRemValue;
    double  _awakeValue;
    double  _maxDurationValue;
    double  _totalDurationValue;
}

@property (nonatomic) double asleepCoreValue;
@property (nonatomic) double asleepDeepValue;
@property (nonatomic) double asleepRemValue;
@property (nonatomic) double awakeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxDurationValue;
@property (readonly) Class superclass;
@property (nonatomic) double totalDurationValue;
@property (nonatomic, retain) HKSleepChartPointUserInfo *userInfo;

+ (id)chartPointsForSummaries:(id)arg1 context:(id)arg2;

- (id)allYValues;
- (double)asleepCoreValue;
- (double)asleepDeepValue;
- (double)asleepRemValue;
- (double)awakeValue;
- (double)maxDurationValue;
- (id)maxYValue;
- (void)setAsleepCoreValue:(double)arg1;
- (void)setAsleepDeepValue:(double)arg1;
- (void)setAsleepRemValue:(double)arg1;
- (void)setAwakeValue:(double)arg1;
- (void)setMaxDurationValue:(double)arg1;
- (void)setTotalDurationValue:(double)arg1;
- (double)totalDurationValue;

@end


@interface HKSleepStageChartPoint : HKSleepPeriodChartPoint <HKSleepSleepChartPointUserInfoProvider> {
    NSArray * _asleepCoreOffsets;
    NSArray * _asleepDeepOffsets;
    NSArray * _asleepRemOffsets;
    NSArray * _asleepUnspecifiedOffsets;
    NSArray * _awakeOffsets;
}

@property (nonatomic, retain) NSArray *asleepCoreOffsets;
@property (nonatomic, retain) NSArray *asleepDeepOffsets;
@property (nonatomic, retain) NSArray *asleepRemOffsets;
@property (nonatomic, retain) NSArray *asleepUnspecifiedOffsets;
@property (nonatomic, retain) NSArray *awakeOffsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKSleepChartPointUserInfo *userInfo;

+ (bool)_segment:(id)arg1 isAdjacentToSegment:(id)arg2;
+ (id)chartPointsForSummaries:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)allYValues;
- (id)asleepCoreOffsets;
- (id)asleepDeepOffsets;
- (id)asleepRemOffsets;
- (id)asleepUnspecifiedOffsets;
- (id)awakeOffsets;
- (void)setAsleepCoreOffsets:(id)arg1;
- (void)setAsleepDeepOffsets:(id)arg1;
- (void)setAsleepRemOffsets:(id)arg1;
- (void)setAsleepUnspecifiedOffsets:(id)arg1;
- (void)setAwakeOffsets:(id)arg1;
- (id)yValuesForSleepAnalysis:(long long)arg1;

@end

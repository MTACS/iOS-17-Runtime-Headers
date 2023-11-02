
@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing> {
    NSArray * _asleepOffsets;
    bool  _highlighted;
    NSArray * _inBedOffsets;
    NSNumber * _lowerGoal;
    NSNumber * _upperGoal;
    HKSleepChartPointUserInfo * _userInfo;
    NSDate * _xValue;
}

@property (nonatomic, retain) NSArray *asleepOffsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) NSArray *inBedOffsets;
@property (nonatomic, copy) NSNumber *lowerGoal;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *upperGoal;
@property (nonatomic, retain) HKSleepChartPointUserInfo *userInfo;
@property (nonatomic, copy) NSDate *xValue;

+ (id)chartPointsForSummaries:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)allYValues;
- (id)asleepOffsets;
- (bool)highlighted;
- (id)inBedOffsets;
- (id)lowerGoal;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setAsleepOffsets:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInBedOffsets:(id)arg1;
- (void)setLowerGoal:(id)arg1;
- (void)setUpperGoal:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (id)upperGoal;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

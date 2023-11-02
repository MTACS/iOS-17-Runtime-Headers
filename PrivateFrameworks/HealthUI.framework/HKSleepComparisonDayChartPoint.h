
@interface HKSleepComparisonDayChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing> {
    NSDate * _endDate;
    NSDate * _startDate;
    HKSleepChartPointUserInfo * _userInfo;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKSleepChartPointUserInfo *userInfo;
@property (nonatomic, retain) NSNumber *yValue;

+ (id)chartPointsForSummaries:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
- (id)endDate;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)startDate;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

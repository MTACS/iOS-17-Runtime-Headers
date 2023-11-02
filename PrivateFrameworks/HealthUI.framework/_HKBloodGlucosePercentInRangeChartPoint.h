
@interface _HKBloodGlucosePercentInRangeChartPoint : NSObject <HKChartPoint> {
    NSNumber * _fractionBelowUpperEuglycemiaBound;
    NSNumber * _fractionBelowUpperLevel1HypoglycemiaBound;
    NSNumber * _fractionBelowUpperLevel2HypoglycemiaBound;
    NSDate * _midDate;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *fractionBelowUpperEuglycemiaBound;
@property (nonatomic, retain) NSNumber *fractionBelowUpperLevel1HypoglycemiaBound;
@property (nonatomic, retain) NSNumber *fractionBelowUpperLevel2HypoglycemiaBound;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *midDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)fractionBelowUpperEuglycemiaBound;
- (id)fractionBelowUpperLevel1HypoglycemiaBound;
- (id)fractionBelowUpperLevel2HypoglycemiaBound;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 userInfo:(id)arg3;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)midDate;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setFractionBelowUpperEuglycemiaBound:(id)arg1;
- (void)setFractionBelowUpperLevel1HypoglycemiaBound:(id)arg1;
- (void)setFractionBelowUpperLevel2HypoglycemiaBound:(id)arg1;
- (void)setMidDate:(id)arg1;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

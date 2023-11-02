
@interface HKHandwashingEventChartPoint : NSObject <HKChartPoint> {
    NSNumber * _averageDuration;
    NSDate * _endDate;
    bool  _meetsGoal;
    NSDate * _midDate;
    NSDate * _startDate;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (nonatomic, copy) NSNumber *averageDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool meetsGoal;
@property (nonatomic, retain) NSDate *midDate;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)averageDuration;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (bool)meetsGoal;
- (id)midDate;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setAverageDuration:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMeetsGoal:(bool)arg1;
- (void)setMidDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)startDate;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

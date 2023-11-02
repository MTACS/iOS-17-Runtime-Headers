
@interface HKLevelCategoryChartPoint : NSObject <HKChartPoint> {
    NSDate * _endDate;
    long long  _pointStyle;
    NSDate * _startDate;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pointStyle;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, retain) NSNumber *yValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
- (id)endDate;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (long long)pointStyle;
- (void)setEndDate:(id)arg1;
- (void)setPointStyle:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)startDate;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

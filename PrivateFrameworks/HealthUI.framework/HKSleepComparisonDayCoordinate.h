
@interface HKSleepComparisonDayCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    long long  _sleepValue;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    double  _xValueEnd;
    double  _xValueStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sleepValue;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, readonly) double xValueEnd;
@property (nonatomic, readonly) double xValueStart;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (double)endXValue;
- (id)initWithXValueStart:(double)arg1 xValueEnd:(double)arg2 sleepValue:(long long)arg3 userInfo:(id)arg4;
- (long long)sleepValue;
- (double)startXValue;
- (id)userInfo;
- (double)xValueEnd;
- (double)xValueStart;

@end

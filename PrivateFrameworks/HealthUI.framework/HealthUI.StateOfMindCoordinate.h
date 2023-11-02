
@interface HealthUI.StateOfMindCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    void dailyYValueRanges;
    void maxYValue;
    void minYValue;
    void momentaryYValueRanges;
    void userInfo;
    void xValue;
}

@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (double)endXValue;
- (id)init;
- (double)startXValue;
- (id)userInfo;

@end


@protocol HKGraphSeriesBlockCoordinate <NSObject>

@required

- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (double)endXValue;
- (double)startXValue;
- (<HKGraphSeriesBlockCoordinateInfo> *)userInfo;

@end

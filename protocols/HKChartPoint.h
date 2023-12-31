
@protocol HKChartPoint <NSObject>

@required

- (NSArray *)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (<HKGraphSeriesBlockCoordinateInfo> *)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(NSString *)arg1;

@end

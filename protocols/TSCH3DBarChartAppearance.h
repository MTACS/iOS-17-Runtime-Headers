
@protocol TSCH3DBarChartAppearance

@required

- (float)chartMinZForScene:(TSCH3DScene *)arg1;
- (float)depthForScene:(TSCH3DScene *)arg1;
- (bool)isCircular;
- (float)maxValueForSeries:(long long)arg1;
- (float)signedValueForSeries:(TSCHChartSeries *)arg1 index:(void*)arg2;

@end

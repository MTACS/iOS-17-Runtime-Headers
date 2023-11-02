
@interface PICurvesLuminanceAutoCalculator : PICurvesAutoCalculator

- (id)computeCurvesForImageHistogram:(id)arg1;
- (struct CGPoint { double x1; double x2; })curvePointAtIndex:(int)arg1 blackPoint:(double)arg2 whitePoint:(double)arg3 histogram:(id)arg4;

@end

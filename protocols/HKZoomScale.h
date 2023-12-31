
@protocol HKZoomScale <NSObject>

@required

- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (HKValueRange *)unitZoomScaleValueRange;
- (long long)zoomForZoomScale:(double)arg1;
- (double)zoomScaleForRange:(struct HKRange { double x1; double x2; })arg1;

@end

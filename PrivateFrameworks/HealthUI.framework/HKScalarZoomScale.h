
@interface HKScalarZoomScale : NSObject <HKZoomScale>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (id)unitZoomScaleValueRange;
- (long long)zoomForZoomScale:(double)arg1;
- (double)zoomScaleForRange:(struct HKRange { double x1; double x2; })arg1;

@end


@protocol NTKClockIconZoomAnimator <NSObject>

@required

- (void)cleanupAfterZoom;
- (void)prepareToZoomWithIconView:(NTKClockIconView *)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;

@end

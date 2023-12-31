
@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator {
    double  _maximumTemporaryZoomScale;
    double  _maximumZoomScale;
    double  _minimumTemporaryZoomScale;
    double  _minimumZoomScale;
}

@property (nonatomic) double maximumTemporaryZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumTemporaryZoomScale;
@property (nonatomic) double minimumZoomScale;

- (void)_updateMaximumValue;
- (void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2;
- (id)init;
- (id)initWithCoordinateSpace:(id)arg1;
- (double)maximumTemporaryZoomScale;
- (double)maximumZoomScale;
- (double)minimumTemporaryZoomScale;
- (double)minimumZoomScale;
- (void)setMaximumTemporaryZoomScale:(double)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumTemporaryZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)zoomScaleUpdated:(double)arg1;

@end

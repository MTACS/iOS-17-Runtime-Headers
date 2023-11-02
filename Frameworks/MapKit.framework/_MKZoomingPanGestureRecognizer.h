
@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer {
    bool  _didStartUpdate;
    double  _lastUpdateTimestamp;
    double  _previousVelocity;
    double  _scale;
    double  _translation;
    double  _velocity;
    double  _zoomDraggingResistance;
}

@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double velocity;
@property (nonatomic) double zoomDraggingResistance;

- (void)_updateScaleAndVelocityIfNeeded:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (double)scale;
- (void)setZoomDraggingResistance:(double)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)velocity;
- (double)zoomDraggingResistance;

@end

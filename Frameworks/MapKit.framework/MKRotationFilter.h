
@interface MKRotationFilter : NSObject {
    double  _additionalSnappingAngle;
    <MKRotationFilterDelegate> * _delegate;
    double  _gestureStartAngle;
    VKMapView * _mapLayer;
    double  _previousVerticalYawOverride;
    bool  _snappedAtStart;
    bool  _snappedToNorth;
    bool  _snappingEnabled;
    bool  _userRotatedAwayFromVerticalYaw;
}

@property (nonatomic) double additionalSnappingAngle;
@property (nonatomic) <MKRotationFilterDelegate> *delegate;
@property (getter=isSnappedToNorth, nonatomic) bool snappedToNorth;

- (void).cxx_destruct;
- (double)additionalSnappingAngle;
- (id)delegate;
- (bool)hasAdditionalSnappingAngle;
- (id)init;
- (id)initWithMapLayer:(id)arg1;
- (bool)isSnappedToNorth;
- (void)setAdditionalSnappingAngle:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnappedToNorth:(bool)arg1;
- (void)snapToNorthAnimated:(bool)arg1 forceTrueNorth:(bool)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 withSnapping:(bool)arg2;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)updateSnappedToNorth;

@end

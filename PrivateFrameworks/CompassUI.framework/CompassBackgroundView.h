
@interface CompassBackgroundView : CompassRotatingView {
    double  _bearing;
    CALayer * _bearingLayer;
    double  _bearingLength;
    CALayer * _bubbleLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _compassCenter;
    CAShapeLayer * _crosshairLayer;
    CALayer * _currentHeadingLayer;
    double  _currentHeadingLength;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentOffset;
    CAReplicatorLayer * _largeCompassTicLayers;
    CALayer * _prototypeLargeTicLayer;
    CALayer * _prototypeSmallTicLayer;
    CALayer * _rotatingLayer;
    bool  _shownInCompass;
    CAReplicatorLayer * _smallCompassTicLayers;
    CALayer * _staticLayer;
    double  _ticLength;
    double  _ticRadius;
}

@property (nonatomic) double bearing;
@property (nonatomic, readonly) double ticLength;
@property (nonatomic) double ticRadius;

- (void).cxx_destruct;
- (id)_crosshairLayerWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_crosshairPathInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)bearing;
- (id)bearingLayer;
- (id)bubbleLayer;
- (id)crosshairLayer;
- (id)currentHeadingLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCompass:(bool)arg2;
- (id)largeCompassTicLayers;
- (void)layoutSubviews;
- (id)prototypeLargeTicLayer;
- (id)prototypeSmallTicLayer;
- (id)rotatingLayer;
- (void)setBearing:(double)arg1;
- (void)setCompassHeading:(double)arg1;
- (bool)setCrosshairOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setTicRadius:(double)arg1;
- (id)smallCompassTicLayers;
- (id)staticLayer;
- (double)ticLength;
- (double)ticRadius;

@end

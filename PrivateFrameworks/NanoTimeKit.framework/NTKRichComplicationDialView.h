
@interface NTKRichComplicationDialView : UIView {
    long long  _largeTickCount;
    CALayer * _largeTickLayer;
    double  _largeTickPositionY;
    CAReplicatorLayer * _largeTicksReplicatorLayer;
    double  _largeTicksTransformAngle;
    float  _progress;
    float  _progressDirection;
    long long  _smallTickCountPerLargeTick;
    CALayer * _smallTickLayer;
    double  _smallTickPositionY;
    CAReplicatorLayer * _smallTicksReplicatorLayer;
    UIColor * _tickColor;
}

@property (nonatomic, readonly) CALayer *largeTickLayer;
@property (nonatomic) float progress;
@property (nonatomic) float progressDirection;
@property (nonatomic, readonly) CALayer *smallTickLayer;
@property (nonatomic) UIColor *tickColor;

- (void).cxx_destruct;
- (void)_updateTicksRotationTransform;
- (id)initWithLargeTickCount:(long long)arg1 smallTickCountPerLargeTick:(long long)arg2 largeTickSize:(struct CGSize { double x1; double x2; })arg3 smallTickSize:(struct CGSize { double x1; double x2; })arg4 dialRange:(double)arg5 startAngle:(double)arg6;
- (id)initWithTickCount:(long long)arg1 tickSize:(struct CGSize { double x1; double x2; })arg2 dialRange:(double)arg3 startAngle:(double)arg4;
- (id)largeTickLayer;
- (void)layoutSubviews;
- (float)progress;
- (float)progressDirection;
- (void)setLargeTicksTransformAngle:(double)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressDirection:(float)arg1;
- (void)setTickColor:(id)arg1;
- (id)smallTickLayer;
- (id)tickColor;

@end


@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (nonatomic) TSUColor *TSUColor;
@property (nonatomic) double angle;
@property (nonatomic) struct CGColor { }*color;
@property (nonatomic) double curve;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

- (void)setAngle:(double)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setCurve:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setTSUColor:(id)arg1;

@end

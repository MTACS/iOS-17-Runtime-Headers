
@interface TSDMutableDropShadow : TSDDropShadow

@property (nonatomic) double angle;
@property (nonatomic) struct CGColor { }*color;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAngle:(double)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOffset:(double)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setTSUColor:(id)arg1;

@end

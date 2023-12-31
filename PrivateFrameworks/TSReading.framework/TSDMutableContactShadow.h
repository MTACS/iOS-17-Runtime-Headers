
@interface TSDMutableContactShadow : TSDContactShadow

@property (nonatomic) TSUColor *TSUColor;
@property (nonatomic) struct CGColor { }*color;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double height;
@property (nonatomic) double offset;
@property (nonatomic) double perspective;
@property (nonatomic) double radius;

- (void)setColor:(struct CGColor { }*)arg1;
- (void)setHeight:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setOpacity:(double)arg1;
- (void)setPerspective:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setTSUColor:(id)arg1;

@end


@interface TSDShapeRenderable : TSDRenderable

@property (nonatomic) struct CGColor { }*fillColor;
@property (nonatomic, copy) NSString *lineCap;
@property (nonatomic, copy) NSArray *lineDashPattern;
@property (nonatomic) double lineDashPhase;
@property (nonatomic, copy) NSString *lineJoin;
@property (nonatomic) double lineWidth;
@property (nonatomic) double miterLimit;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;
@property (nonatomic) struct CGColor { }*strokeColor;
@property (nonatomic) double strokeEnd;

+ (id)renderable;
+ (id)renderableFromShapeLayer:(id)arg1;

- (struct CGColor { }*)fillColor;
- (id)initWithShapeLayer:(id)arg1;
- (id)lineCap;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (id)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (struct CGPath { }*)path;
- (void)setCGLineCap:(int)arg1;
- (void)setCGLineJoin:(int)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(double)arg1;
- (id)shapeLayer;
- (struct CGColor { }*)strokeColor;
- (double)strokeEnd;

@end

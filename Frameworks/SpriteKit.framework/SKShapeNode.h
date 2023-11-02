
@interface SKShapeNode : SKNode {
    void * _skcShapeNode;
}

@property (getter=isAntialiased, nonatomic) bool antialiased;
@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic) long long blendMode;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) SKShader *fillShader;
@property (nonatomic, retain) SKTexture *fillTexture;
@property (nonatomic) double glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic, readonly) double lineLength;
@property (nonatomic) double lineWidth;
@property (nonatomic) double miterLimit;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic) double renderQualityRatio;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) SKShader *strokeShader;
@property (nonatomic, retain) SKTexture *strokeTexture;

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (id)shapeNodeWithCircleOfRadius:(double)arg1;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)shapeNodeWithPath:(struct CGPath { }*)arg1;
+ (id)shapeNodeWithPath:(struct CGPath { }*)arg1 centered:(bool)arg2;
+ (id)shapeNodeWithPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)shapeNodeWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithRectOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)shapeNodeWithRectOfSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithTriangleA:(struct CGPoint { double x1; double x2; })arg1 B:(struct CGPoint { double x1; double x2; })arg2 C:(struct CGPoint { double x1; double x2; })arg3;
+ (bool)supportsSecureCoding;

- (void)_didMakeBackingNode;
- (void)_initialize;
- (void*)_makeBackingNode;
- (long long)blendMode;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fillColor;
- (id)fillShader;
- (id)fillTexture;
- (double)glowWidth;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAntialiased;
- (bool)isEqualToNode:(id)arg1;
- (int)lineCap;
- (int)lineJoin;
- (double)lineLength;
- (double)lineWidth;
- (double)miterLimit;
- (struct CGPath { }*)path;
- (double)renderQualityRatio;
- (void)setAntialiased:(bool)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillShader:(id)arg1;
- (void)setFillTexture:(id)arg1;
- (void)setGlowWidth:(double)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setRenderQualityRatio:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeShader:(id)arg1;
- (void)setStrokeTexture:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)strokeColor;
- (id)strokeShader;
- (id)strokeTexture;
- (id)valueForAttributeNamed:(id)arg1;

@end

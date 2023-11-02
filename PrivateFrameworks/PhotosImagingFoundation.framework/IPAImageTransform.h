
@interface IPAImageTransform : NSObject <IPAImageTransform> {
    <IPAImageGeometry> * _inputGeometry;
    <IPAImageGeometry> * _intrinsicGeometry;
}

+ (id)compositeTransforms:(id)arg1;
+ (id)identityTransformForGeometry:(id)arg1;

- (void).cxx_destruct;
- (bool)canAlignToPixelsExactly;
- (id)description;
- (id)init;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2;
- (id)inputGeometry;
- (id)intrinsicGeometry;
- (id)inverseTransform;
- (struct CGPoint { double x1; double x2; })mapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct Vector2d { double x1; double x2; })mapVector:(struct Vector2d { double x1; double x2; })arg1;

@end

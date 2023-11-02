
@interface IPAImageTransformSequence : NSObject <IPAImageTransform> {
    NSArray * _transforms;
}

- (void).cxx_destruct;
- (bool)canAlignToPixelsExactly;
- (id)description;
- (id)initWithTransforms:(id)arg1;
- (id)inputGeometry;
- (id)intrinsicGeometry;
- (id)inverseTransform;
- (struct CGPoint { double x1; double x2; })mapPoint:(struct CGPoint { double x1; double x2; })arg1;

@end

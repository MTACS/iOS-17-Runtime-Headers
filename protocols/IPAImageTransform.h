
@protocol IPAImageTransform

@required

- (bool)canAlignToPixelsExactly;
- (<IPAImageGeometry> *)inputGeometry;
- (<IPAImageGeometry> *)intrinsicGeometry;
- (<IPAImageTransform> *)inverseTransform;
- (struct CGPoint { double x1; double x2; })mapPoint:(struct CGPoint { double x1; double x2; })arg1;

@end

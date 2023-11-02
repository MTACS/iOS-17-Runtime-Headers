
@interface IPAImageIdentityTransform : IPAImageTransform

- (bool)canAlignToPixelsExactly;
- (id)description;
- (id)inverseTransform;
- (struct Vector2d { double x1; double x2; })mapVector:(struct Vector2d { double x1; double x2; })arg1;

@end


@protocol NUColorSamplerResult <NURenderResult>

@required

- (struct CGColor { }*)color;
- (struct { long long x1; long long x2; })point;

@end

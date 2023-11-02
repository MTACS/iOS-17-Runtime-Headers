
@interface NUCompoundTransform : NUGeometryTransform {
    NSArray * _transforms;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;
- (id)initWithTransforms:(id)arg1;
- (id)inverseTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end

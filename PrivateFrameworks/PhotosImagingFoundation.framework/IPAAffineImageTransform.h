
@interface IPAAffineImageTransform : IPAImageTransform {
    bool  _canAlignToPixelsExactly;
    struct Matrix4d { 
        double m[16]; 
    }  _matrix;
}

- (id).cxx_construct;
- (bool)canAlignToPixelsExactly;
- (id)description;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d { double x1[16]; }*)arg3 canAlignToPixelsExactly:(bool)arg4;
- (id)inverseTransform;
- (struct Vector2d { double x1; double x2; })mapVector:(struct Vector2d { double x1; double x2; })arg1;
- (struct Matrix4d { double x1[16]; })matrix;

@end

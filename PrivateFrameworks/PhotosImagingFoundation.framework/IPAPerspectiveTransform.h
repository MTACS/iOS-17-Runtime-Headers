
@interface IPAPerspectiveTransform : IPAImageTransform {
    <IPAQuadGeometry> * _intrinsicGeometry;
    bool  _isInverse;
    struct Matrix4d { 
        double m[16]; 
    }  _projectionTransform;
    struct Matrix4d { 
        double m[16]; 
    }  _viewingTransform;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canAlignToPixelsExactly;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const struct Matrix4d { double x1[16]; }*)arg3 viewingTransform:(const struct Matrix4d { double x1[16]; }*)arg4;
- (id)intrinsicGeometry;
- (id)inverseTransform;
- (struct Vector2d { double x1; double x2; })mapVector:(struct Vector2d { double x1; double x2; })arg1;

@end

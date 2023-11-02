
@interface CHQuadCurvePointFIFO : CHPointFIFO {
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _controlPoints;
    <CHPointFIFODrawingTarget> * _drawingTarget;
    id /* block */  _emissionHandler;
    bool  _emitInterpolatedPoints;
    void _lastPoint;
    double  _lineWidth;
    struct CGPath { } * _path;
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _points;
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _prevPoints;
    float  _unitScale;
}

@property (copy) id /* block */ emissionHandler;
@property (nonatomic) bool emitInterpolatedPoints;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic) float unitScale;

+ (void)interpolateFromPoint:(void *)arg1 toPoint:(void *)arg2 controlPoint:(void *)arg3 time:(void *)arg4; // needs 4 arg types, found 1: float

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (id /* block */)emissionHandler;
- (bool)emitInterpolatedPoints;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)initWithFIFO:(id)arg1 drawingTarget:(id)arg2;
- (double)lineWidth;
- (struct CGPath { }*)path;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setEmitInterpolatedPoints:(bool)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setUnitScale:(float)arg1;
- (void)setUnitScaleForViewSize:(struct CGSize { double x1; double x2; })arg1 normalizedSize:(struct CGSize { double x1; double x2; })arg2 contentScaleFactor:(double)arg3;
- (float)unitScale;

@end

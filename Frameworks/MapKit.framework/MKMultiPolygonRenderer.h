
@interface MKMultiPolygonRenderer : MKOverlayPathRenderer <NSSecureCoding> {
    const struct CGPath {} ** _paths;
    unsigned long long  _pathsCount;
    double  _strokeEnd;
    double  _strokeStart;
    VKVectorOverlayPolygonGroup * _vectorData;
}

@property (nonatomic, readonly) MKMultiPolygon *multiPolygon;
@property (getter=_strokeEnd, setter=_setStrokeEnd:, nonatomic) double strokeEnd;
@property (getter=_strokeStart, setter=_setStrokeStart:, nonatomic) double strokeStart;

+ (Class)_mapkitLeafClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canProvideVectorGeometry;
- (void)_decodePropertiesWithCoder:(id)arg1;
- (void)_performInitialConfiguration;
- (void)_setStrokeEnd:(double)arg1;
- (void)_setStrokeStart:(double)arg1;
- (double)_strokeEnd;
- (double)_strokeStart;
- (void)_updateRenderColors;
- (id)_vectorGeometry;
- (void)createPath;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiPolygon:(id)arg1;
- (id)multiPolygon;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)vectorDataForOverlay:(id)arg1;

@end

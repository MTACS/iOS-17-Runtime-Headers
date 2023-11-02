
@interface MKPolygonRenderer : MKOverlayPathRenderer <NSSecureCoding> {
    double  _strokeEnd;
    double  _strokeStart;
    VKVectorOverlayPolygonGroup * _vectorData;
}

@property (nonatomic, readonly) MKPolygon *polygon;
@property (nonatomic) double strokeEnd;
@property (nonatomic) double strokeStart;

+ (Class)_mapkitLeafClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canProvideVectorGeometry;
- (void)_decodePropertiesWithCoder:(id)arg1;
- (void)_performInitialConfiguration;
- (void)_updateRenderColors;
- (id)_vectorGeometry;
- (void)createPath;
- (void)encodeWithCoder:(id)arg1;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolygon:(id)arg1;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (id)polygon;
- (void)setAlpha:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (double)strokeEnd;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (double)strokeStart;
- (id)vectorDataForOverlay:(id)arg1;

@end

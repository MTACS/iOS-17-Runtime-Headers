
@interface MKMultiPolylineRenderer : MKOverlayPathRenderer <NSSecureCoding> {
    double  _strokeEnd;
    double  _strokeStart;
    VKVectorOverlayPolylineGroup * _vectorGeometry;
}

@property (nonatomic, readonly) MKMultiPolyline *multiPolyline;
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
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiPolyline:(id)arg1;
- (id)multiPolyline;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;

@end

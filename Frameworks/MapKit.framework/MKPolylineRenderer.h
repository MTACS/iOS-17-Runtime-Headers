
@interface MKPolylineRenderer : MKOverlayPathRenderer <NSSecureCoding> {
    double  _strokeEnd;
    double  _strokeStart;
    VKVectorOverlayPolylineGroup * _vectorGeometry;
}

@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic) double strokeEnd;
@property (nonatomic) double strokeStart;

+ (Class)_mapkitLeafClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canProvideVectorGeometry;
- (void)_decodePropertiesWithCoder:(id)arg1;
- (void)_performInitialConfiguration;
- (void)_setNeedsVectorGeometryUpdate;
- (void)_updateRenderColors;
- (void)_updateVectorGeometry:(id)arg1;
- (id)_vectorGeometry;
- (void)createPath;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolyline:(id)arg1;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (id)polyline;
- (void)setAlpha:(double)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (double)strokeEnd;
- (double)strokeStart;
- (id)vectorDataForOverlay:(id)arg1;

@end

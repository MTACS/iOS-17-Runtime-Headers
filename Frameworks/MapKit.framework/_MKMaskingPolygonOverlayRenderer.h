
@interface _MKMaskingPolygonOverlayRenderer : MKOverlayRenderer {
    long long  _style;
    VKVectorOverlayMaskingPolygonGroup * _vectorData;
}

@property (nonatomic) long long style;

- (void).cxx_destruct;
- (bool)_canPossiblyDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (bool)_canProvideVectorGeometry;
- (id)_vectorGeometry;
- (bool)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (id)initWithMultiPolygon:(id)arg1;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (id)vectorDataForOverlay:(id)arg1;

@end

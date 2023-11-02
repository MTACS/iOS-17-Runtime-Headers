
@interface MKGradientPolylineRenderer : MKPolylineRenderer {
    NSArray * _colors;
    NSArray * _externallySetColors;
    NSArray * _externallySetLocations;
    NSArray * _locations;
}

@property (nonatomic, readonly, copy) NSArray *colors;
@property (nonatomic, readonly, copy) NSArray *locations;

+ (Class)_mapkitLeafClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canProvideVectorGeometry;
- (void)_updateColorStops;
- (void)_updateVectorGeometry:(id)arg1;
- (id)colors;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)locations;
- (void)setColors:(id)arg1 atLocations:(id)arg2;

@end

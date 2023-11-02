
@interface _MKMarkerStyle : NSObject {
    UIColor * _glyphColor;
    UIImage * _glyphImage;
    UIColor * _markerColor;
    double  _shadowAlpha;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic, readonly) UIColor *glyphColor;
@property (nonatomic, readonly) UIImage *glyphImage;
@property (nonatomic, readonly) UIColor *markerColor;
@property (nonatomic, readonly) double shadowAlpha;
@property (nonatomic, readonly) UIColor *strokeColor;
@property (nonatomic, readonly) double strokeWidth;

+ (id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2 styleAttributes:(id)arg3 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (id)glyphColor;
- (id)glyphImage;
- (id)markerColor;
- (double)shadowAlpha;
- (id)strokeColor;
- (double)strokeWidth;

@end

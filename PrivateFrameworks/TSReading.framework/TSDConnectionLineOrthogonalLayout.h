
@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout

- (void)addEndpointSnapsToXs:(void*)arg1 andYs:(void*)arg2;
- (struct CGPoint { double x1; double x2; })axisSnapPoint:(struct CGPoint { double x1; double x2; })arg1 toXs:(struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })arg2 toYs:(struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })arg3 withThreshold:(double)arg4;
- (bool)canEndpointsCoincide;
- (struct CGPoint { double x1; double x2; })controlPointForPointA:(struct CGPoint { double x1; double x2; })arg1 pointB:(struct CGPoint { double x1; double x2; })arg2 andOriginalA:(struct CGPoint { double x1; double x2; })arg3 originalB:(struct CGPoint { double x1; double x2; })arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })orthoRectOfLayout:(id)arg1 outset:(double)arg2;

@end

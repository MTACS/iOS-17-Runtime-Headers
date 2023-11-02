
@interface VCPPnPSolver : NSObject {
    float * _alphas;
    float  _cameraOrientation;
    float  _controlPointsCamera;
    float  _controlPointsWorld;
    float  _fu;
    float  _fv;
    int  _numPoints;
    const float * _points2D;
    const float * _points3D;
    float * _points3DCamera;
    const float * _pointsImage;
    const float * _pointsWorld;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    float  _uc;
    float  _vc;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;

- (int)computeBarycentricCoordinates;
- (void)computeControlPointsCamera:(const float*)arg1 Vt:(void*)arg2;
- (int)computeL6x10:(void*)arg1 L6x10:(void*)arg2;
- (void)computePoints3DCamera;
- (float)computeProjectionError:(float)arg1 T:(float)arg2;
- (void)computeR6x1:(void*)arg1;
- (int)computeRT:(float)arg1 T:(float)arg2;
- (int)computeSVDVt:(void*)arg1 Vt:(void*)arg2;
- (int)configureGaussNewton:(void*)arg1 R6x1:(void*)arg2 betas:(float)arg3 jacobian:(void*)arg4 residual:(void*)arg5;
- (int)correctSigns;
- (void)dealloc;
- (int)estimateBetasN1:(void*)arg1 R6x1:(void*)arg2 betas:(float*)arg3;
- (int)estimateBetasN2:(void*)arg1 R6x1:(void*)arg2 betas:(float*)arg3;
- (int)estimateBetasN3:(void*)arg1 R6x1:(void*)arg2 betas:(float*)arg3;
- (int)estimateExtrinsicsWith:(const float*)arg1 andPoints3D:(const float*)arg2 andNumPoints:(int)arg3;
- (int)estimatePose:(float*)arg1;
- (int)estimateRT:(void*)arg1 betas:(const float*)arg2 R:(float)arg3 T:(float)arg4 projectionError:(float*)arg5;
- (int)getControlPoints;
- (id)initWithFocalLengthInPixels:(float)arg1 principalPoint:(struct CGPoint { double x1; double x2; })arg2 cameraTowardsPositiveZ:(bool)arg3;
- (int)optimizeBetas:(void*)arg1 R6x1:(void*)arg2 betas:(float)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (void)setPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)updateFocalLengthInPixels:(float)arg1;
- (void)updateIntrinsic:(float)arg1 vc:(float)arg2;

@end


@interface CRNeuralTextDetectorV1 : CRNeuralTextDetector {
    CRTextDetectorModel * _model;
}

@property (retain) CRTextDetectorModel *model;

+ (bool)_supportsFragmentedLines;
+ (void)aggregateScoreAndGeoMap:(id)arg1 inputGeo:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 outputScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg4 outputGeoMap:(struct vImage_Buffer {}**)arg5 outputOrigin:(struct CGPoint { double x1; double x2; })arg6;
+ (struct vImage_Buffer {}**)allocGeometricMaps:(struct CGSize { double x1; double x2; })arg1;
+ (void)calculateTargetOutputSize:(struct CGSize { double x1; double x2; }*)arg1 adjustedInputScale:(double*)arg2 paddedSize:(struct CGSize { double x1; double x2; }*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 maximumSize:(struct CGSize { double x1; double x2; })arg5;
+ (void)deallocGeometricMaps:(struct vImage_Buffer {}**)arg1;
+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })extractImageMap:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)genPolyResults:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 geoMap:(struct vImage_Buffer {}**)arg2 scale:(struct CGSize { double x1; double x2; })arg3 mergingType:(int)arg4;
+ (void)getMasksForScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 imageMask:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 binaryMask:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3;
+ (void)scaleBufferNearestNeighbor:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 geoMap:(struct vImage_Buffer {}**)arg2 dest:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 destGeomap:(struct vImage_Buffer {}**)arg4 binaryMask:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg5;

- (void).cxx_destruct;
- (id)detectInImage:(id)arg1 error:(id*)arg2;
- (id)detectInImage:(id)arg1 trackingSession:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)processScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 geoMap:(struct vImage_Buffer {}**)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4;
- (void)setModel:(id)arg1;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;

@end

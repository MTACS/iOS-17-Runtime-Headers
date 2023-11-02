
@interface CRNeuralTextDetectorV2 : CRNeuralTextDetector {
    CRTextDetectorModel * _model;
}

@property (retain) CRTextDetectorModel *model;

+ (bool)_supportsFragmentedLines;
+ (void)aggregateScoreAndGeoMap:(id)arg1 inputGeo:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 outputScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg4 outputGeoMap:(void*)arg5 outputOrigin:(struct CGPoint { double x1; double x2; })arg6;
+ (void)calculateTargetOutputSize:(struct CGSize { double x1; double x2; }*)arg1 adjustedInputScale:(double*)arg2 paddedSize:(struct CGSize { double x1; double x2; }*)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 maximumSize:(struct CGSize { double x1; double x2; })arg5;
+ (struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x1; void *x2; struct __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x_3_1_1; } x3; })createGeometricMaps:(struct CGSize { double x1; double x2; })arg1;
+ (struct unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>> { struct __compressed_pair<CRImageBuffer *, std::default_delete<CRImageBuffer>> { struct CRImageBuffer {} *x_1_1_1; } x1; })createImageMap:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)genPolyResultsForMIVSNMS:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 geoMap:(void*)arg2 output:(void*)arg3 mergingType:(int)arg4;
+ (void)getMasksForScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 imageMask:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 binaryMask:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3;
+ (void)scaleBufferNearestNeighbor:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 geoMap:(void*)arg2 dest:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 destGeomap:(void*)arg4 binaryMask:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg5;

- (void).cxx_destruct;
- (id)detectInImage:(id)arg1 error:(id*)arg2;
- (id)detectInImage:(id)arg1 trackingSession:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)processScoreMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 geoMap:(void*)arg2 adjustedSize:(struct CGSize { double x1; double x2; })arg3 scoreMapFullTile:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg4 geoMapFullTile:(void*)arg5 adjustedFullTileSize:(struct CGSize { double x1; double x2; })arg6 targetSize:(struct CGSize { double x1; double x2; })arg7 targetSizeFullTile:(struct CGSize { double x1; double x2; })arg8 intermediateResults:(id*)arg9 tileRects:(id)arg10;
- (void)setModel:(id)arg1;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;

@end

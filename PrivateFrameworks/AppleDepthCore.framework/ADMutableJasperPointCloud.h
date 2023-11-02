
@interface ADMutableJasperPointCloud : ADJasperPointCloud

@property (readonly) int capacity;
@property (readonly) char *mutableBankIds;
@property (readonly) struct CGPoint { double x1; double x2; }*mutableCameraPixels;
@property (readonly) float*mutableConfidences;
@property (readonly) char *mutableEchoIds;
@property (readonly) float*mutableEuclideanDistances;
@property (readonly) unsigned int*mutableFlags;
@property (readonly) float*mutableIntensities;
@property (readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**mutablePoints;
@property (readonly) float*mutableSignalToNoiseRatios;
@property (readonly) char *mutableSpotIds;
@property (readonly) struct CGPoint { double x1; double x2; }*mutableUndistortedCameraPixels;

- (void)appendPointsFrom:(id)arg1;
- (void)appendPointsFrom:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)applyPerformanceOverrides;
- (void)blacken;
- (int)capacity;
- (id)initWithCapacity:(int)arg1;
- (id)initWithCapacity:(int)arg1 storage:(struct __CVBuffer { }*)arg2;
- (char *)mutableBankIds;
- (struct CGPoint { double x1; double x2; }*)mutableCameraPixels;
- (float*)mutableConfidences;
- (char *)mutableEchoIds;
- (float*)mutableEuclideanDistances;
- (unsigned int*)mutableFlags;
- (float*)mutableIntensities;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)mutablePoints;
- (float*)mutableSignalToNoiseRatios;
- (char *)mutableSpotIds;
- (struct CGPoint { double x1; double x2; }*)mutableUndistortedCameraPixels;
- (void)replacePointsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withPointsFrom:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)resize:(int)arg1;

@end

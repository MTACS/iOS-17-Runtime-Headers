
@interface JDPointCloud : NSObject {
    JDCameraCalibrationData * _cameraCalibrationData;
    ADMutableJasperPointCloud * _pc;
}

@property (readonly) char *bankIds;
@property (readonly) JDCameraCalibrationData *cameraCalibrationData;
@property (readonly) struct CGPoint { double x1; double x2; }*cameraPixels;
@property (readonly) float*confidences;
@property (readonly) char *echoIds;
@property (readonly) float*euclideanDistances;
@property (readonly) unsigned int*flags;
@property (readonly) float*intensities;
@property (readonly) int length;
@property (readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (readonly) float*signalToNoiseRatios;
@property (readonly) int size;
@property (readonly) char *spotIds;
@property (readonly) struct CGPoint { double x1; double x2; }*undistortedCameraPixels;

+ (id)makeWithDataBuffer:(struct __CVBuffer { }*)arg1;
+ (id)makeWithDictionaryRepresentation:(id)arg1;
+ (unsigned int)pixelFormat;
+ (id)pointCloudByMergingPointClouds:(id)arg1;
+ (unsigned long long)requiredStorageBytesForLength:(int)arg1;

- (void).cxx_destruct;
- (void)applyPerformanceOverrides;
- (char *)bankIds;
- (void)calculatePixelsFromUndistortedPixels;
- (void)calculateUndistortedPixelsFromCameraPixels;
- (void)calculateUndistortedPixelsFromWorldPoints;
- (void)calculateWorldPointsFromUndistortedPixels;
- (id)cameraCalibrationData;
- (struct CGPoint { double x1; double x2; }*)cameraPixels;
- (float*)confidences;
- (struct __CVBuffer { }*)dataBuffer;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (char *)echoIds;
- (float*)euclideanDistances;
- (unsigned int*)flags;
- (id)initWithLength:(int)arg1 cameraCalibration:(id)arg2 storage:(struct __CVBuffer { }*)arg3;
- (id)initWithLength:(int)arg1 storage:(struct __CVBuffer { }*)arg2;
- (id)initWithPointCloud:(id)arg1;
- (id)initWithSize:(int)arg1 calibrationData:(id)arg2;
- (float*)intensities;
- (int)length;
- (id)pointCloudByChangingPointOfView:(id)arg1;
- (id)pointCloudByChangingPointOfViewByTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 to:(id)arg2;
- (id)pointCloudByChangingPointOfViewFrom:(id)arg1 to:(id)arg2;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)replacePointsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withPointsFrom:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)reset;
- (float*)signalToNoiseRatios;
- (int)size;
- (char *)spotIds;
- (struct CGPoint { double x1; double x2; }*)undistortedCameraPixels;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;

@end

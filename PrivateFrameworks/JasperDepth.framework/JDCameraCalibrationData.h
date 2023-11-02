
@interface JDCameraCalibrationData : NSObject <NSCopying, NSMutableCopying> {
    NSData * _distortionWarperMesh;
    long long  _distortionWarperMeshHeight;
    long long  _distortionWarperMeshWidth;
    ADMutableCameraCalibration * _internal;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraToPlatformTransform;
@property (nonatomic, readonly) NSData *distortedRadii;
@property (nonatomic, readonly) int distortionModel;
@property (nonatomic, readonly) const struct JDGDCPolynomials { float x1[8]; float x2[8]; }*distortionPolynomials;
@property (nonatomic, readonly) NSData *distortionWarperMesh;
@property (nonatomic, readonly) long long distortionWarperMeshHeight;
@property (nonatomic, readonly) long long distortionWarperMeshWidth;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsicMatrix;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lensDistortionCenter;
@property (nonatomic, readonly) float pixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceDimensions;
@property (nonatomic, readonly) NSData *undistortedRadii;

+ (id)makeWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraToPlatformTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)distortedRadii;
- (int)distortionModel;
- (const struct JDGDCPolynomials { float x1[8]; float x2[8]; }*)distortionPolynomials;
- (id)distortionWarperMesh;
- (long long)distortionWarperMeshHeight;
- (long long)distortionWarperMeshWidth;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getCameraToPlatformForTransformation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)getInternalCalib;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getTransformationTo:(id)arg1;
- (id)init;
- (id)initWithInternalCalibration:(id)arg1;
- (id)internalCalib;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsicMatrix;
- (struct CGPoint { double x1; double x2; })lensDistortionCenter;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)pixelSize;
- (struct CGSize { double x1; double x2; })referenceDimensions;
- (id)undistortedRadii;

@end

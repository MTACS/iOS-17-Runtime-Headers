
@interface ADCameraCalibration : NSObject <NSCopying, NSMutableCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraToPlatformTransform;
    <ADLensDistortionModel> * _distortionModel;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsicMatrix;
    float  _pixelSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceDimensions;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraToPlatformTransform;
@property (nonatomic, readonly) <ADLensDistortionModel> *distortionModel;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsicMatrix;
@property (nonatomic, readonly) float pixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceDimensions;

// Image: /System/Library/PrivateFrameworks/AppleDepthCore.framework/AppleDepthCore

+ (id)cameraCalibrationFromFile:(id)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })createIntrinsicsMatrixWithEFL:(float)arg1 principalPointX:(float)arg2 principalPointY:(float)arg3;
+ (void)transform:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 with:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 outPoints:(/* Warning: Unrecognized filer type: '9' using 'void*' */ void**)arg4;

- (void).cxx_destruct;
- (void)backProject:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withR:(const float*)arg3 outPoints:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (void)backProject:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withZ:(const float*)arg3 outPoints:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraToPlatformTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDictionaryRepresentationWithHumanReadable:(bool)arg1;
- (id)dictionaryRepresentation;
- (void)distort:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 outDistorted:(struct CGPoint { double x1; double x2; }*)arg3;
- (id)distortionModel;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getTransformationTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFile:(id)arg1;
- (id)initWithIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 cameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 pixelSize:(double)arg3 forReferenceDimensions:(struct CGSize { double x1; double x2; })arg4 withDistortionModel:(id)arg5;
- (id)initWithIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 cameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize { double x1; double x2; })arg4 distortionModel:(id)arg5;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsicMatrix;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)pixelSize;
- (void)project:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)project:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg3 outR:(float*)arg4;
- (struct CGSize { double x1; double x2; })referenceDimensions;
- (void)transform:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 toCamera:(id)arg3 outPoints:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (void)undistort:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 outUndistorted:(struct CGPoint { double x1; double x2; }*)arg3;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)ar_calibrationWithImageData:(id)arg1 adCalibrationData:(id)arg2;
+ (id)ar_initWithCVACameraCalibrationData:(id)arg1;

- (id)ar_initWithImageData:(id)arg1 calibrationData:(id)arg2;
- (id)ar_initWithImageData:(id)arg1 cameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 pixelSize:(double)arg3 referenceDimensions:(struct CGSize { double x1; double x2; })arg4 distortionCenter:(struct CGPoint { double x1; double x2; })arg5 lensDistortionLookupTable:(id)arg6 inverseLensDistortionLookupTable:(id)arg7;

@end

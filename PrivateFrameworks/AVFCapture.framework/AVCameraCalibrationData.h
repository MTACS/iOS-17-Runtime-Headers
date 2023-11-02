
@interface AVCameraCalibrationData : NSObject {
    AVCameraCalibrationDataInternal * _internal;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsicMatrix;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsicMatrix;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicMatrixReferenceDimensions;
@property (nonatomic, readonly) NSData *inverseLensDistortionLookupTable;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lensDistortionCenter;
@property (nonatomic, readonly) NSData *lensDistortionLookupTable;
@property (nonatomic, readonly) float pixelSize;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint { double x1; double x2; })arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize { double x1; double x2; })arg4 lookupTableLength:(int)arg5;
- (id)_initEmpty;
- (id)cameraCalibrationDataDictionary;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;
- (struct CGImageMetadata { }*)copyAuxiliaryMetadata;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicMatrix;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata { }*)arg1;
- (id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithDepthMetadataDictionary:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsicMatrix;
- (struct CGSize { double x1; double x2; })intrinsicMatrixReferenceDimensions;
- (id)inverseLensDistortionLookupTable;
- (struct CGPoint { double x1; double x2; })lensDistortionCenter;
- (id)lensDistortionLookupTable;
- (float)pixelSize;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

@end


@interface ADFigCameraCalibrationSource : NSObject {
    ADMutableCameraCalibration * _camera;
    ADDynamicPolynomialsLensDistortionModel * _distortion;
    float  _rawSensorPixelSize;
}

@property (readonly) ADCameraCalibration *cameraCalibration;

+ (struct float4x3 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })figExtrinsicsToTransform:(id)arg1;
+ (void)getFrameTransformsFromMetadataDictionary:(id)arg1 sensorCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rawSensorSize:(struct CGSize { double x1; double x2; }*)arg3 postReadCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
+ (double)getMidExposureTimestampFromMetadataDictionary:(id)arg1;
+ (double)getMidExposureTimestampFromMetadataDictionary:(id)arg1 timestamp:(double)arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getTransformFromStream:(id)arg1 toStream:(id)arg2 usingExtrinsicsDictionary:(id)arg3;

- (void).cxx_destruct;
- (id)cameraCalibration;
- (id)initWithPixelSize:(float)arg1 gdcModel:(id)arg2 cameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (bool)pointFromMetadataField:(id)arg1 key:(id)arg2 point:(struct CGPoint { double x1; double x2; }*)arg3;
- (bool)rectFromMetadataField:(id)arg1 key:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (bool)updateForFrame:(struct __CVBuffer { }*)arg1;
- (bool)updateForFrameWithDimensions:(struct CGSize { double x1; double x2; })arg1 metadataDictionary:(id)arg2;

@end

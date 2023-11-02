
@protocol NUAuxiliaryImageProperties <NSObject>

@required

- (NSDictionary *)auxiliaryCoreGraphicsInfoDictionary:(out id*)arg1;
- (struct CGImageMetadata { }*)auxiliaryDataInfoMetadata;
- (<NUAuxiliaryImage> *)auxiliaryImage:(out id*)arg1;
- (NSString *)auxiliaryImageTypeCGIdentifier;
- (AVCameraCalibrationData *)depthCameraCalibrationData;
- (struct { long long x1; long long x2; })size;

@end

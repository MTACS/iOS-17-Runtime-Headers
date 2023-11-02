
@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties> {
    NSDictionary * _auxCoreGraphicsInfoDictionary;
    id  _auxDataInfoMetadata;
    <NUAuxiliaryImage> * _auxImage;
    NSString * _auxiliaryImageTypeCGIdentifier;
    AVCameraCalibrationData * _depthCamCalibrationData;
    id  _imageSource;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (retain) NSDictionary *auxCoreGraphicsInfoDictionary;
@property (retain) id auxDataInfoMetadata;
@property (retain) <NUAuxiliaryImage> *auxImage;
@property (readonly) NSString *auxiliaryImageTypeCGIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (retain) AVCameraCalibrationData *depthCamCalibrationData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxCoreGraphicsInfoDictionary;
- (id)auxDataInfoMetadata;
- (id)auxImage;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id*)arg1;
- (struct CGImageMetadata { }*)auxiliaryDataInfoMetadata;
- (id)auxiliaryImage:(out id*)arg1;
- (id)auxiliaryImageTypeCGIdentifier;
- (id)depthCamCalibrationData;
- (id)depthCameraCalibrationData;
- (id)description;
- (id)initWithCGProperties:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (void)setAuxCoreGraphicsInfoDictionary:(id)arg1;
- (void)setAuxDataInfoMetadata:(id)arg1;
- (void)setAuxImage:(id)arg1;
- (void)setDepthCamCalibrationData:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })size;

@end

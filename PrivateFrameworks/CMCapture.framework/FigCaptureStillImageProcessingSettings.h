
@interface FigCaptureStillImageProcessingSettings : NSObject <NSSecureCoding> {
    NSDictionary * _cameraInfoByPortType;
    NSDictionary * _moduleCalibrationByPortType;
    struct { 
        int width; 
        int height; 
    }  _sensorRawDimensions;
    unsigned int  _sensorRawPixelFormat;
    float  _uiZoomFactor;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResSensorRawDimensions;
}

@property (nonatomic, copy) NSDictionary *cameraInfoByPortType;
@property (nonatomic, copy) NSDictionary *moduleCalibrationByPortType;
@property (nonatomic) struct { int x1; int x2; } sensorRawDimensions;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) float uiZoomFactor;
@property (nonatomic) struct { int x1; int x2; } ultraHighResSensorRawDimensions;

+ (bool)supportsSecureCoding;

- (id)cameraInfoByPortType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)moduleCalibrationByPortType;
- (struct { int x1; int x2; })sensorRawDimensions;
- (unsigned int)sensorRawPixelFormat;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setModuleCalibrationByPortType:(id)arg1;
- (void)setSensorRawDimensions:(struct { int x1; int x2; })arg1;
- (void)setSensorRawPixelFormat:(unsigned int)arg1;
- (void)setUiZoomFactor:(float)arg1;
- (void)setUltraHighResSensorRawDimensions:(struct { int x1; int x2; })arg1;
- (float)uiZoomFactor;
- (struct { int x1; int x2; })ultraHighResSensorRawDimensions;

@end

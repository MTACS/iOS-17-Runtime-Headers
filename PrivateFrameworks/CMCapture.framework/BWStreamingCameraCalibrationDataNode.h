
@interface BWStreamingCameraCalibrationDataNode : BWNode {
    NSDictionary * _cameraInfoByPortType;
    int  _horizontalSensorBinningFactor;
    bool  _mirroringEnabled;
    int  _rotationDegrees;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) bool mirroringEnabled;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) int verticalSensorBinningFactor;

+ (void)initialize;

- (void)dealloc;
- (int)horizontalSensorBinningFactor;
- (id)initWithCameraInfoByPortType:(id)arg1;
- (bool)mirroringEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotationDegrees;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (int)verticalSensorBinningFactor;

@end

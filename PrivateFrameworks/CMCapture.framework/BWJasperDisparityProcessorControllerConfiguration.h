
@interface BWJasperDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    int  _horizontalSensorBinningFactor;
    BWVideoFormat * _inputColorFormat;
    BWVideoFormat * _outputDepthFormat;
    int  _pointCloudTimeMachineCapacity;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic, retain) BWVideoFormat *inputColorFormat;
@property (nonatomic, retain) BWVideoFormat *outputDepthFormat;
@property (nonatomic) int pointCloudTimeMachineCapacity;
@property (nonatomic) int verticalSensorBinningFactor;

- (void)dealloc;
- (int)horizontalSensorBinningFactor;
- (id)inputColorFormat;
- (id)outputDepthFormat;
- (int)pointCloudTimeMachineCapacity;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setInputColorFormat:(id)arg1;
- (void)setOutputDepthFormat:(id)arg1;
- (void)setPointCloudTimeMachineCapacity:(int)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (int)verticalSensorBinningFactor;

@end

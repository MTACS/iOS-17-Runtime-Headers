
@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    int  _horizontalSensorBinningFactor;
    BWVideoFormat * _inputColorFormat;
    BWVideoFormat * _outputDepthFormat;
    struct { 
        int width; 
        int height; 
    }  _standardFormatDimensions;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic, retain) BWVideoFormat *inputColorFormat;
@property (nonatomic, retain) BWVideoFormat *outputDepthFormat;
@property (nonatomic) struct { int x1; int x2; } standardFormatDimensions;
@property (nonatomic) int verticalSensorBinningFactor;

- (void)dealloc;
- (id)description;
- (int)horizontalSensorBinningFactor;
- (id)inputColorFormat;
- (id)outputDepthFormat;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setInputColorFormat:(id)arg1;
- (void)setOutputDepthFormat:(id)arg1;
- (void)setStandardFormatDimensions:(struct { int x1; int x2; })arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (struct { int x1; int x2; })standardFormatDimensions;
- (int)verticalSensorBinningFactor;

@end

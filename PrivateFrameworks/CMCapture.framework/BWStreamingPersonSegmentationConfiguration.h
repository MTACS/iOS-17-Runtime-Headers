
@interface BWStreamingPersonSegmentationConfiguration : BWInferenceConfiguration {
    bool  _cropColorInputToPrimaryCaptureRect;
    unsigned int  _inputRotationAngle;
    bool  _propagateColorInput;
    bool  _useLowFrameRateOptimizedNetwork;
}

@property (nonatomic) bool cropColorInputToPrimaryCaptureRect;
@property (nonatomic) unsigned int inputRotationAngle;
@property (nonatomic) bool propagateColorInput;
@property (nonatomic) bool useLowFrameRateOptimizedNetwork;

- (bool)cropColorInputToPrimaryCaptureRect;
- (unsigned int)inputRotationAngle;
- (bool)propagateColorInput;
- (void)setCropColorInputToPrimaryCaptureRect:(bool)arg1;
- (void)setInputRotationAngle:(unsigned int)arg1;
- (void)setPropagateColorInput:(bool)arg1;
- (void)setUseLowFrameRateOptimizedNetwork:(bool)arg1;
- (bool)useLowFrameRateOptimizedNetwork;

@end

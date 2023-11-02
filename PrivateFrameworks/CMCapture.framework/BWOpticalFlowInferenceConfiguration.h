
@interface BWOpticalFlowInferenceConfiguration : BWInferenceConfiguration {
    NSString * _attachedMediaKeyForPropagatedColorInput;
    unsigned long long  _concurrencyWidth;
    bool  _cropColorInputToPrimaryCaptureRect;
    struct { 
        int width; 
        int height; 
    }  _forceIntermediateDimensions;
    struct { 
        int width; 
        int height; 
    }  _inputDimensions;
    unsigned int  _inputRotationAngle;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    NSString * _portType;
    bool  _propagateColorInput;
}

@property (nonatomic) NSString *attachedMediaKeyForPropagatedColorInput;
@property (nonatomic) unsigned long long concurrencyWidth;
@property (nonatomic) bool cropColorInputToPrimaryCaptureRect;
@property (nonatomic) struct { int x1; int x2; } forceIntermediateDimensions;
@property (nonatomic) struct { int x1; int x2; } inputDimensions;
@property (nonatomic) unsigned int inputRotationAngle;
@property (nonatomic) struct { int x1; int x2; } outputDimensions;
@property (nonatomic) NSString *portType;

- (id)attachedMediaKeyForPropagatedColorInput;
- (unsigned long long)concurrencyWidth;
- (bool)cropColorInputToPrimaryCaptureRect;
- (struct { int x1; int x2; })forceIntermediateDimensions;
- (struct { int x1; int x2; })inputDimensions;
- (unsigned int)inputRotationAngle;
- (struct { int x1; int x2; })outputDimensions;
- (id)portType;
- (void)setAttachedMediaKeyForPropagatedColorInput:(id)arg1;
- (void)setConcurrencyWidth:(unsigned long long)arg1;
- (void)setCropColorInputToPrimaryCaptureRect:(bool)arg1;
- (void)setForceIntermediateDimensions:(struct { int x1; int x2; })arg1;
- (void)setInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setInputRotationAngle:(unsigned int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setPortType:(id)arg1;

@end

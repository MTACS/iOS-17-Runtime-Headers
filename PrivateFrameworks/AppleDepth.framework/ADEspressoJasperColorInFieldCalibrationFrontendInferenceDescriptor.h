
@interface ADEspressoJasperColorInFieldCalibrationFrontendInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _errorXOutput;
    ADEspressoImageDescriptor * _errorYOutput;
    ADEspressoImageDescriptor * _errorZOutput;
    ADEspressoImageDescriptor * _featuresInput;
    ADEspressoImageDescriptor * _rotationXOutput;
    ADEspressoImageDescriptor * _rotationYOutput;
    ADEspressoImageDescriptor * _rotationZOutput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *errorXOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *errorYOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *errorZOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *featuresInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *rotationXOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *rotationYOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *rotationZOutput;

- (void).cxx_destruct;
- (id)errorXOutput;
- (id)errorYOutput;
- (id)errorZOutput;
- (id)featuresInput;
- (id)initWithNetworkProvider:(id)arg1 espressoEngine:(unsigned long long)arg2 networkFlowType:(int)arg3;
- (id)rotationXOutput;
- (id)rotationYOutput;
- (id)rotationZOutput;

@end

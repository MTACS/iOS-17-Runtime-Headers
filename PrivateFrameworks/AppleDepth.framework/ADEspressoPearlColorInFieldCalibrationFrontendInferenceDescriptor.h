
@interface ADEspressoPearlColorInFieldCalibrationFrontendInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _errorXOutput;
    ADEspressoImageDescriptor * _errorYOutput;
    ADEspressoImageDescriptor * _featuresInput;
    ADEspressoImageDescriptor * _rotationXOutput;
    ADEspressoImageDescriptor * _rotationYOutput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *errorXOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *errorYOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *featuresInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *rotationXOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *rotationYOutput;

- (void).cxx_destruct;
- (id)errorXOutput;
- (id)errorYOutput;
- (id)featuresInput;
- (id)initWithNetworkProvider:(id)arg1 espressoEngine:(unsigned long long)arg2;
- (id)rotationXOutput;
- (id)rotationYOutput;

@end

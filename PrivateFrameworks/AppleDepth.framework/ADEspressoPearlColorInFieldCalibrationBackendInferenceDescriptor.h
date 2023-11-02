
@interface ADEspressoPearlColorInFieldCalibrationBackendInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _featuresOutput;
    ADEspressoImageDescriptor * _pearlInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *featuresOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *pearlInput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)featuresOutput;
- (id)initWithNetworkProvider:(id)arg1 espressoEngine:(unsigned long long)arg2 networkFlowType:(int)arg3;
- (id)pearlInput;

@end

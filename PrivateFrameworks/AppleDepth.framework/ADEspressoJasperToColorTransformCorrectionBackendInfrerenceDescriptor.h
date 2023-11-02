
@interface ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _featuresOutput;
    ADEspressoImageDescriptor * _jasperInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *featuresOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *jasperInput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)featuresOutput;
- (id)initWithNetworkProvider:(id)arg1;
- (id)jasperInput;

@end

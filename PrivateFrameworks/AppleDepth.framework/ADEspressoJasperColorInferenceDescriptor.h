
@interface ADEspressoJasperColorInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _alphaMapOutput;
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _confidenceOutput;
    ADEspressoImageDescriptor * _depthOutput;
    ADEspressoImageDescriptor * _jasperInput;
    ADEspressoImageDescriptor * _normalsOutput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *alphaMapOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *confidenceOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *jasperInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *normalsOutput;

- (void).cxx_destruct;
- (id)alphaMapOutput;
- (id)colorInput;
- (id)confidenceOutput;
- (id)depthOutput;
- (id)initWithNetworkProvider:(id)arg1;
- (id)jasperInput;
- (id)normalsOutput;

@end


@interface ADEspressoStillImageInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _depthOutput;
    ADEspressoImageDescriptor * _jasperInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *jasperInput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)depthOutput;
- (id)initWithNetworkProvider:(id)arg1;
- (id)jasperInput;

@end

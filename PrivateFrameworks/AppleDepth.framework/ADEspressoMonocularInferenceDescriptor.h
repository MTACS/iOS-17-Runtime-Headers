
@interface ADEspressoMonocularInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _depthOutput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthOutput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)depthOutput;
- (id)initWithNetworkProvider:(id)arg1;

@end

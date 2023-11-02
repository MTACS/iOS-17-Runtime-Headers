
@interface ADEspressoMonocularV2InferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _disparityOutput;
    ADEspressoImageDescriptor * _prevDisparityInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *disparityOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevDisparityInput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)disparityOutput;
- (id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned int)arg2 disparityFormat:(unsigned int)arg3;
- (id)prevDisparityInput;

@end

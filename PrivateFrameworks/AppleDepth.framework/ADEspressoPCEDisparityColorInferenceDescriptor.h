
@interface ADEspressoPCEDisparityColorInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _disparityInput;
    ADEspressoImageDescriptor * _disparityOutput;
    ADEspressoImageDescriptor * _featuresOutput;
    ADEspressoImageDescriptor * _prevDisparityInput;
    ADEspressoImageDescriptor * _prevFeaturesInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *disparityInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *disparityOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *featuresOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevDisparityInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevFeaturesInput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)disparityInput;
- (id)disparityOutput;
- (id)featuresOutput;
- (id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned int)arg2 disparityFormat:(unsigned int)arg3;
- (id)prevDisparityInput;
- (id)prevFeaturesInput;

@end

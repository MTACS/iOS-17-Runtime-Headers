
@interface ADEspressoStereoInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _auxiliaryInput;
    ADEspressoImageDescriptor * _auxiliaryNoiseSigmaInput;
    ADEspressoImageDescriptor * _disparityOutput;
    ADEspressoImageDescriptor * _referenceInput;
    ADEspressoImageDescriptor * _referenceNoiseSigmaInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *auxiliaryInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *auxiliaryNoiseSigmaInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *disparityOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *referenceInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *referenceNoiseSigmaInput;

- (void).cxx_destruct;
- (id)auxiliaryInput;
- (id)auxiliaryNoiseSigmaInput;
- (id)disparityOutput;
- (id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned int)arg2 outputDisparityFormat:(unsigned int)arg3;
- (id)referenceInput;
- (id)referenceNoiseSigmaInput;

@end

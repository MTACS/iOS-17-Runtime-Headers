
@interface ADEspressoStereoV2InferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _auxiliaryInput;
    ADEspressoImageDescriptor * _colorFeaturesOutput;
    ADEspressoImageDescriptor * _depthFeaturesOutput;
    ADEspressoImageDescriptor * _disparityOutput;
    ADEspressoImageDescriptor * _prevColorFeaturesInput;
    ADEspressoImageDescriptor * _prevDepthFeaturesInput;
    ADEspressoImageDescriptor * _referenceInput;
    ADEspressoImageDescriptor * _temporalSmoothingCurrentFeaturesRatioMinInput;
    ADEspressoImageDescriptor * _temporalSmoothingPreviousFeaturesRatioMinInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *auxiliaryInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *colorFeaturesOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthFeaturesOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *disparityOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevColorFeaturesInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevDepthFeaturesInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *referenceInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *temporalSmoothingCurrentFeaturesRatioMinInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *temporalSmoothingPreviousFeaturesRatioMinInput;

- (void).cxx_destruct;
- (id)auxiliaryInput;
- (id)colorFeaturesOutput;
- (id)depthFeaturesOutput;
- (id)disparityOutput;
- (id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned int)arg2 outputDisparityFormat:(unsigned int)arg3;
- (id)prevColorFeaturesInput;
- (id)prevDepthFeaturesInput;
- (id)referenceInput;
- (id)temporalSmoothingCurrentFeaturesRatioMinInput;
- (id)temporalSmoothingPreviousFeaturesRatioMinInput;

@end

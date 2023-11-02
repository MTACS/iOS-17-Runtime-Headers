
@interface ADEspressoJasperColorV2InferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorFeaturesOutput;
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _depthFeaturesOutput;
    ADEspressoImageDescriptor * _depthOutput;
    ADEspressoImageDescriptor * _jasperInput;
    ADEspressoImageDescriptor * _prevColorInput;
    ADEspressoImageDescriptor * _prevDepthInput;
    ADEspressoImageDescriptor * _prevUncertaintyInput;
    ADEspressoImageDescriptor * _uncertaintyOutput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorFeaturesOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthFeaturesOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *jasperInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevColorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevDepthInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *prevUncertaintyInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *uncertaintyOutput;

- (void).cxx_destruct;
- (id)colorFeaturesOutput;
- (id)colorInput;
- (id)depthFeaturesOutput;
- (id)depthOutput;
- (id)initWithNetworkProvider:(id)arg1 espressoEngine:(unsigned long long)arg2 lidarType:(unsigned long long)arg3;
- (id)jasperInput;
- (id)prevColorInput;
- (id)prevDepthInput;
- (id)prevUncertaintyInput;
- (id)uncertaintyOutput;

@end


@interface ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _colorInput;
    ADEspressoImageDescriptor * _depthOutput;
    ADEspressoImageDescriptor * _lidarInput;
    ADEspressoImageDescriptor * _uncertaintyOutput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *colorInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *depthOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *lidarInput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *uncertaintyOutput;

- (void).cxx_destruct;
- (id)colorInput;
- (id)depthOutput;
- (id)initWithNetworkProvider:(id)arg1 espressoEngine:(unsigned long long)arg2;
- (id)lidarInput;
- (id)uncertaintyOutput;

@end

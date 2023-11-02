
@interface ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor : ADEspressoInferenceDescriptor {
    ADEspressoImageDescriptor * _anglesOutput;
    ADEspressoImageDescriptor * _errorsOutput;
    ADEspressoImageDescriptor * _featuresInput;
}

@property (nonatomic, readonly) ADEspressoImageDescriptor *anglesOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *errorsOutput;
@property (nonatomic, readonly) ADEspressoImageDescriptor *featuresInput;

- (void).cxx_destruct;
- (id)anglesOutput;
- (id)errorsOutput;
- (id)featuresInput;
- (id)initWithNetworkProvider:(id)arg1;

@end


@interface SIPersonDetector : SIModel {
    SIPersonDetectorNetworkConfiguration * _configuration;
}

- (void).cxx_destruct;
- (long long)copyResultsToData:(id)arg1;
- (long long)evaluateForInput:(struct __CVBuffer { }*)arg1;
- (long long)evaluateForInput:(id)arg1 output:(id)arg2;
- (struct CGSize { double x1; double x2; })getInputResolution;
- (struct CGSize { double x1; double x2; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)arg1;

@end

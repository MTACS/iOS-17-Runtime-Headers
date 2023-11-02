
@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject <CRRecognizerFeatureProviding> {
    CRNeuralRecognizerConfiguration * _configuration;
    NSObject<CRTextRecognizerModelInputProvider> * _inputProvider;
}

@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<CRTextRecognizerModelInputProvider> *inputProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (void)enumerateInputsForImage:(id)arg1 lineRegions:(id)arg2 rectifier:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3;
- (id)inputProvider;
- (void)setConfiguration:(id)arg1;
- (void)setInputProvider:(id)arg1;

@end

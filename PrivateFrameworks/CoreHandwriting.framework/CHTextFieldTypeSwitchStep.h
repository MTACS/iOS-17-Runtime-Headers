
@interface CHTextFieldTypeSwitchStep : CHPostprocessingStepModifyingOriginalTokens {
    CHPostProcessingManager * _asciiProcessor;
    CHPostProcessingManager * _defaultProcessor;
    CHPostProcessingManager * _digitProcessor;
    CHPostProcessingManager * _emailProcessor;
    CHPostProcessingManager * _equationProcessor;
    CHPostProcessingManager * _phoneProcessor;
    CHPostProcessingManager * _urlProcessor;
    CHPostProcessingManager * _usernameProcessor;
}

@property (nonatomic, retain) CHPostProcessingManager *defaultProcessor;

- (void).cxx_destruct;
- (id)defaultProcessor;
- (id)initProcessorDefault:(id)arg1 processorDigits:(id)arg2 processorPhone:(id)arg3 processorUsername:(id)arg4 processorEmail:(id)arg5 processorURL:(id)arg6 processorASCII:(id)arg7 processorEquation:(id)arg8;
- (id)process:(id)arg1 options:(id)arg2;
- (void)setDefaultProcessor:(id)arg1;

@end

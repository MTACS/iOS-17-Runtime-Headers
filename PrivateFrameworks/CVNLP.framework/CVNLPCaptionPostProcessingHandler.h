
@interface CVNLPCaptionPostProcessingHandler : NSObject {
    CVNLPCaptionRuntimeParameters * _runtimeParameters;
    NSCharacterSet * _trimSet;
}

@property (readonly) CVNLPCaptionRuntimeParameters *runtimeParameters;
@property (readonly) NSCharacterSet *trimSet;

- (void).cxx_destruct;
- (bool)_checkAboveThreshold:(id)arg1 observationConfidence:(double)arg2 difference:(id*)arg3;
- (id)_checkForBlockingTokens:(id)arg1 blockingTokens:(id)arg2;
- (id)_checkForBlockingTokens:(id)arg1 visionObservations:(id)arg2;
- (id)_excludeGenderReplacements:(id)arg1 genderOption:(int)arg2 error:(id*)arg3;
- (id)_excludeGenderTriggers:(id)arg1 genderOption:(int)arg2 error:(id*)arg3;
- (id)_filterVisionObservations:(id)arg1;
- (id)_replacements:(id)arg1 genderOption:(int)arg2;
- (id)initWithOptions:(id)arg1 runtimeParameters:(id)arg2;
- (id)postProcessCaptions:(id)arg1 genderOption:(int)arg2 error:(id*)arg3;
- (id)postProcessCaptions:(id)arg1 visionObservations:(id)arg2;
- (id)runtimeParameters;
- (id)trimSet;

@end

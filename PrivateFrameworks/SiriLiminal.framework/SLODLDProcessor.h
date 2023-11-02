
@interface SLODLDProcessor : NSObject {
    SLODLDConfigDecoder * _config;
    SLODLDClassifierV1 * _model;
    <SLODLDPreProcessingComponent> * _preprocessor;
    <SLODLDTokenizerComponent> * _tokenizer;
}

@property (nonatomic, retain) SLODLDConfigDecoder *config;
@property (nonatomic, retain) SLODLDClassifierV1 *model;
@property (nonatomic, retain) <SLODLDPreProcessingComponent> *preprocessor;
@property (nonatomic, retain) <SLODLDTokenizerComponent> *tokenizer;

- (void).cxx_destruct;
- (id)_getPreprocessorForType:(unsigned long long)arg1 withConfig:(id)arg2;
- (id)_getTokenizerForType:(unsigned long long)arg1 withConfig:(id)arg2;
- (id)_setupPipelineComponentsUsingConfig:(id)arg1;
- (id)config;
- (id)initWithConfigFile:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)preprocessor;
- (id)processInputContext:(id)arg1;
- (id)processInputUtterance:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPreprocessor:(id)arg1;
- (void)setTokenizer:(id)arg1;
- (id)tokenizer;

@end

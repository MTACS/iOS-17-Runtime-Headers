
@interface SLODLDClassifierV1 : NSObject <SLODLDModelComponent> {
    NSDictionary * _inputSpecs;
    MLModel * _odldClassifier;
    NSArray * _outputNodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *inputSpecs;
@property (nonatomic, retain) MLModel *odldClassifier;
@property (nonatomic, retain) NSArray *outputNodes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_constructFeatureDictionary:(id)arg1 withCtx:(id)arg2;
- (void)_extractModelSpecs;
- (id)initWithConfigFile:(id)arg1;
- (id)inputSpecs;
- (id)odldClassifier;
- (id)outputNodes;
- (float)processEncodedTokens:(id)arg1;
- (void)processEncodedTokens:(id)arg1 withContext:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setInputSpecs:(id)arg1;
- (void)setOdldClassifier:(id)arg1;
- (void)setOutputNodes:(id)arg1;

@end

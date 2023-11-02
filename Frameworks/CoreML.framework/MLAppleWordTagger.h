
@interface MLAppleWordTagger : MLModel <MLModelSpecificationLoader> {
    MLAppleWordTaggerParameters * _parameters;
    void * wordTaggingModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLAppleWordTaggerParameters *parameters;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (bool)saveAppleWordTaggingModelToURL:(id)arg1 wordTaggerParameters:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)parameters;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end

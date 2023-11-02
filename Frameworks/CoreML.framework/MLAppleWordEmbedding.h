
@interface MLAppleWordEmbedding : MLModel <MLModelSpecificationLoader> {
    MLAppleWordEmbeddingParameters * _parameters;
    void * wordEmbeddingModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLAppleWordEmbeddingParameters *parameters;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (bool)saveAppleWordEmbeddingModelToURL:(id)arg1 wordEmbeddingParameters:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)parameters;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end

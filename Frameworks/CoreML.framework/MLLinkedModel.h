
@interface MLLinkedModel : MLModel <MLModelSpecificationLoader> {
    MLModel * _linkedModel;
    NSString * _modelFileName;
    NSString * _modelSearchPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MLModel *linkedModel;
@property (retain) NSString *modelFileName;
@property (retain) NSString *modelSearchPath;
@property (readonly) Class superclass;

+ (bool)areFeaturesIn:(id)arg1 modelNamed:(id)arg2 aSubsetOf:(id)arg3 error:(id*)arg4;
+ (id)findFile:(id)arg1 inSearchPath:(id)arg2 basePath:(id)arg3;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithLinkedModel:(id)arg1 modelFileName:(id)arg2 modelSearchPath:(id)arg3 configuration:(id)arg4;
- (id)linkedModel;
- (id)modelFileName;
- (id)modelSearchPath;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setLinkedModel:(id)arg1;
- (void)setModelFileName:(id)arg1;
- (void)setModelSearchPath:(id)arg1;
- (void)updateParameterDescriptionsByUnarchivingSpecification:(const void*)arg1;

@end

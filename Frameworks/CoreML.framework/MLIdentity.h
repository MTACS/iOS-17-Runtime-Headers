
@interface MLIdentity : MLModel <MLModelSpecificationLoader>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { }*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (id)init;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end

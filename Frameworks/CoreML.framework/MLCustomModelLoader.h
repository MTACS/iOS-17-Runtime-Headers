
@interface MLCustomModelLoader : NSObject <MLModelSpecificationLoader>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)customModelWithName:(id)arg1 modelDescription:(id)arg2 modelConfiguration:(id)arg3 parameterDictionary:(id)arg4 error:(id*)arg5;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)parametersFromCustomModelSpec:(void*)arg1 error:(id*)arg2;

@end

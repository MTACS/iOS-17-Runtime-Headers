
@interface PHACurareShadowEvaluationRecipeDecoder : NSObject

+ (id)allowedPredicates;
+ (id)cameraPredicate;
+ (id)castObject:(id)arg1 withName:(id)arg2 toClass:(Class)arg3 error:(id*)arg4;
+ (id)decodeModelSpecificInfo:(id)arg1 models:(id)arg2;
+ (id)decodeRecipeUserInfo:(id)arg1 models:(id)arg2 photoLibrary:(id)arg3 graphManager:(id)arg4 trialDeploymentID:(id)arg5 trialExperimentID:(id)arg6 trialTreatmentID:(id)arg7 decodingError:(id*)arg8;
+ (id)decodingErrorWithMessage:(id)arg1;
+ (bool)isValidFiltersByDatasetName:(id)arg1;
+ (id)objectOfClass:(Class)arg1 forKey:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;
+ (id)optionalObjectOfClass:(Class)arg1 forKey:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;

@end

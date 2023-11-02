
@interface PHAPrivateFederatedLearningRecipeDecoder : NSObject

+ (id)castObject:(id)arg1 withName:(id)arg2 toClass:(Class)arg3 error:(id*)arg4;
+ (id)decodeRecipeUserInfo:(id)arg1 attachmentURLs:(id)arg2 photoLibrary:(id)arg3 graphManager:(id)arg4 decodingError:(id*)arg5;
+ (id)decodingErrorWithMessage:(id)arg1;
+ (id)objectOfClass:(Class)arg1 forKey:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;
+ (id)optionalObjectOfClass:(Class)arg1 forKey:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;

@end

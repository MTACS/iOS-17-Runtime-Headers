
@interface MLSaver : NSObject

+ (bool)copyModelAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)saveModelToArchive:(void*)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id*)arg4;
+ (bool)saveModelToArchive:(void*)arg1 model:(id)arg2 error:(id*)arg3;
+ (bool)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id*)arg3;

@end

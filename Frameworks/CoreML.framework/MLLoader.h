
@interface MLLoader : NSObject

+ (id)_conformConfiguration:(id)arg1 usingModelArchive:(void*)arg2;
+ (bool)_createDecryptSessionForModelAtURL:(id)arg1 configuration:(id)arg2 decryptSession:(id*)arg3 loaderEvent:(id)arg4 error:(id*)arg5;
+ (id)_findCodedObjectURLInModelArchive:(void*)arg1;
+ (id)_loadModelFromArchive:(void*)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 useUpdatableModelLoaders:(bool)arg4 error:(id*)arg5;
+ (id)_loadModelFromArchive:(void*)arg1 configuration:(id)arg2 modelVersion:(id)arg3 compilerVersion:(id)arg4 loaderEvent:(id)arg5 useUpdatableModelLoaders:(bool)arg6 loadingClasses:(id)arg7 error:(id*)arg8;
+ (id)_loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 error:(id*)arg4;
+ (id)_loadModelWithClass:(Class)arg1 fromArchive:(void*)arg2 modelVersionInfo:(id)arg3 compilerVersionInfo:(id)arg4 configuration:(id)arg5 error:(id*)arg6;
+ (id)_loadUpdatableModelWithClass:(Class)arg1 fromArchive:(void*)arg2 modelVersionInfo:(id)arg3 compilerVersionInfo:(id)arg4 configuration:(id)arg5 error:(id*)arg6;
+ (id)_loadWithModelLoaderFromArchive:(void*)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 useUpdatableModelLoaders:(bool)arg4 error:(id*)arg5;
+ (bool)_parseModelArchive:(void*)arg1 modelType:(int*)arg2 compilerVersion:(id*)arg3 modelVersion:(id*)arg4 error:(id*)arg5;
+ (void)_populateLoaderAndPredictionEvent:(id)arg1 model:(id)arg2 configuration:(id)arg3 loadTimeDuration:(unsigned long long)arg4;
+ (id)_unarchiveCodedModelObjectAtURL:(id)arg1 error:(id*)arg2;
+ (bool)checkAssetPath:(id)arg1 error:(id*)arg2;
+ (id)loadModelFromArchive:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromArchive:(void*)arg1 error:(id*)arg2;
+ (id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromAssetAtURL:(id)arg1 error:(id*)arg2;
+ (id)loadUpdatableModelFromArchive:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)loadUpdatableModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;

@end

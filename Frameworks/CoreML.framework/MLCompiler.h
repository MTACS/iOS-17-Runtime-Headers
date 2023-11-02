
@interface MLCompiler : NSObject

+ (id)_compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 compiledModelName:(id)arg3 overridingModelDescription:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (bool)_loadSpecificationAtURL:(id)arg1 to:(void*)arg2 error:(id*)arg3;
+ (void)_updateFeatures:(void*)arg1 withFeatures:(id)arg2;
+ (void)_updateMetadata:(void*)arg1 withMetadata:(id)arg2;
+ (void)_updateSpecification:(void*)arg1 withModelDescription:(id)arg2;
+ (id)addMLProgramToCompiledModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)addMLProgramToCompiledModelAtURL:(id)arg1 withCompilationMode:(int)arg2 dryRun:(bool)arg3 oarchiveForModelCompilation:(void*)arg4 compilerEvent:(id)arg5 error:(id*)arg6;
+ (bool)canAddMLProgramToCompiledModelAtURL:(id)arg1;
+ (id)compileModelAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 compilerEvent:(id)arg4 error:(id*)arg5;
+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForModelAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)compiledVersionForSpecificationAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)contentsOfDirectoryAtURL:(id)arg1 error:(id*)arg2;
+ (bool)encryptCompiledModelAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)encryptFileAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)fillCompilerEvent:(id)arg1 withMetadataFromModelAt:(id)arg2 error:(id*)arg3;
+ (bool)fingerprintSpecificationAtURL:(id)arg1 toArchive:(void*)arg2 hash:(id)arg3 error:(id*)arg4;
+ (id)hashSpecificationAtURL:(id)arg1;
+ (bool)storeEncryptionInfoInCompiledArchive:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)versionInfo;

@end

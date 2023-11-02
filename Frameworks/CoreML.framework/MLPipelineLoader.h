
@interface MLPipelineLoader : NSObject <MLCompiledModelLoader, MLSpecificationCompiler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

@end

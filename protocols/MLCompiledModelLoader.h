
@protocol MLCompiledModelLoader <NSObject>

@required

+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(MLVersionInfo *)arg2 compilerVersionInfo:(MLVersionInfo *)arg3 configuration:(MLModelConfiguration *)arg4 error:(id*)arg5;

@end

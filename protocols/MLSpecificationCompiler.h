
@protocol MLSpecificationCompiler

@required

+ (MLCompilerResult *)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(MLCompilerOptions *)arg3 error:(id*)arg4;
+ (MLVersionInfo *)compiledVersionForSpecification:(void*)arg1 options:(MLCompilerOptions *)arg2 error:(id*)arg3;

@end

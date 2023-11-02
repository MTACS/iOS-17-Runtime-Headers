
@interface _EARe5mlCompiler : NSObject

+ (void)compileWithModelConfig:(id)arg1 completion:(id /* block */)arg2;
+ (void)compileWithModelMilPath:(id)arg1 computePlatform:(id)arg2 completion:(id /* block */)arg3;
+ (void)compileWithModelMilPath:(id)arg1 computePlatforms:(id)arg2 completion:(id /* block */)arg3;
+ (unsigned long long)getMilPathWithModelConfig:(id)arg1 files:(void*)arg2;

@end

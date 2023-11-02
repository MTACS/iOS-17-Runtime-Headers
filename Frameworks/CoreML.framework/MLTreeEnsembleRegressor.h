
@interface MLTreeEnsembleRegressor : MLRegressor <MLCompiledModelLoader, MLModelSpecificationLoader, MLSpecificationCompiler> {
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _cached_model;
    NSData * _model_data;
    unsigned long long  num_dimensions;
    NSArray * output_classes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void*)arg1 options:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const char *)modelData;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (double)scalarRegress:(double*)arg1;
- (double)scalarRegress:(id)arg1 error:(id*)arg2;
- (void)vectorRegress:(double*)arg1 dest:(double*)arg2;

@end

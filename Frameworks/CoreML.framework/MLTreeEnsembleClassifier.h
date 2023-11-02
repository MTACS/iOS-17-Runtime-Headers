
@interface MLTreeEnsembleClassifier : MLClassifier <MLCompiledModelLoader, MLModelSpecificationLoader, MLSpecificationCompiler> {
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _cached_model;
    long long  _class_type;
    NSArray * _class_values;
    struct vector<long long, std::allocator<long long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::allocator<long long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _classes_by_int64_t;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _classes_by_string;
    NSData * _model_data;
    NSString * _single_array_key;
    unsigned long long  num_dimensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_convertStringClassVector:(const void*)arg1 int64ClassVector:(const void*)arg2 dimensions:(unsigned long long)arg3 toClassLabel:(id*)arg4 classType:(long long*)arg5 andReturnError:(id*)arg6;
+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void*)arg1 options:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_buildClassificationClasses:(double*)arg1 topk:(unsigned long long)arg2 error:(id*)arg3;
- (void)_setSingleArrayLookupField;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (const char *)modelData;
- (id)prepareInput:(id)arg1 error:(id*)arg2;

@end

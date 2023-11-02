
@interface MTLDebugLibrary : MTLToolsLibrary {
    id  _code;
    MTLCompileOptions * _compileOptions;
    unsigned long long  _debugType;
    struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; } * _imageFilterFunctionInfo;
    NSArray * _imageFilterFunctions;
}

@property (nonatomic, copy) id code;
@property (nonatomic, copy) MTLCompileOptions *compileOptions;
@property (nonatomic) unsigned long long debugType;
@property (nonatomic, readonly) struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*imageFilterFunctionInfo;
@property (nonatomic, readonly) NSArray *imageFilterFunctions;

- (id)code;
- (id)compileOptions;
- (id)copyConstantValues:(id)arg1;
- (void)dealloc;
- (unsigned long long)debugType;
- (struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)imageFilterFunctionInfo;
- (id)imageFilterFunctions;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;
- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)setCode:(id)arg1;
- (void)setCompileOptions:(id)arg1;
- (void)setDebugType:(unsigned long long)arg1;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2;
- (void)validateDescriptor:(id)arg1 expectedClass:(Class)arg2;

@end

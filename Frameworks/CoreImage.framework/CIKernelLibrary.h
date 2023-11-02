
@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> * _data;
    unsigned long long  _digest;
    NSSet * _extern_function_names;
    <MTLLibrary> * _library;
    NSSet * _stitchable_function_names;
}

@property (readonly) unsigned long long digest;
@property (readonly) unsigned long long functionCount;

+ (id)cache;
+ (id)cachedLibraryWithURL:(id)arg1 error:(id*)arg2;
+ (void)clearCache;
+ (id)coreImageDylibWithDevice:(id)arg1;
+ (id)internalLibraryWithName:(id)arg1 device:(id)arg2;
+ (id)libraryWithData:(id)arg1 error:(id*)arg2;
+ (id)libraryWithSource:(id)arg1 error:(id*)arg2;
+ (id)libraryWithURL:(id)arg1 error:(id*)arg2;

- (void)dealloc;
- (unsigned long long)digest;
- (unsigned long long)functionCount;
- (id)functionNames;
- (id)functionWithName:(id)arg1;
- (void)initFunctionNames;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithSource:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1;
- (id)newSpecializedFunctionWithDescriptor:(id)arg1;
- (id)newSpecializedFunctionWithName:(id)arg1 constants:(void*)arg2;

@end

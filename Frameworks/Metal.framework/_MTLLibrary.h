
@interface _MTLLibrary : _MTLObjectWithLabel <MTLLibrarySPI> {
    struct MTLLibraryContainer { struct MTLPipelineCollection {} *x1; _Atomic int x2; struct { unsigned char x_3_1_1[32]; } x3; struct MTLLibraryData {} *x4; id x5; id x6; id x7; id x8; id x9; } * _cacheEntry;
    <MTLDevice> * _device;
    NSMutableDictionary * _functionDictionary;
    struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; } * _libraryData;
    bool  _shaderValidationEnabled;
}

@property (readonly) NSData *bitcodeData;
@property (readonly) struct MTLLibraryContainer { struct MTLPipelineCollection {} *x1; _Atomic int x2; struct { unsigned char x_3_1_1[32]; } x3; struct MTLLibraryData {} *x4; id x5; id x6; id x7; id x8; id x9; }*cacheEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly, retain) NSArray *externFunctionNames;
@property (nonatomic, readonly, retain) NSMutableDictionary *functionDictionary;
@property (readonly, retain) NSArray *functionNames;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *installName;
@property (readonly) bool isStub;
@property (copy) NSString *label;
@property (readonly) struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*libraryData;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (copy) NSString *overrideTriple;
@property (nonatomic) bool shaderValidationEnabled;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (readonly) NSArray *variableList;

- (id)bitCodeWithHash:(const struct { unsigned char x1[32]; }*)arg1;
- (id)bitcodeData;
- (struct MTLLibraryContainer { struct MTLPipelineCollection {} *x1; _Atomic int x2; struct { unsigned char x_3_1_1[32]; } x3; struct MTLLibraryData {} *x4; id x5; id x6; id x7; id x8; id x9; }*)cacheEntry;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)externFunctionNames;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionDictionary;
- (id)functionNames;
- (bool)getFunctionAliasAndNameForHash:(const struct { unsigned char x1[32]; }*)arg1 functionName:(id*)arg2 alias:(id*)arg3;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer { struct MTLPipelineCollection {} *x1; _Atomic int x2; struct { unsigned char x_3_1_1[32]; } x3; struct MTLLibraryData {} *x4; id x5; id x6; id x7; id x8; id x9; }*)arg1 device:(id)arg2;
- (id)installName;
- (bool)isStub;
- (struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)libraryData;
- (id)libraryDataContents;
- (id)libraryIdentifier;
- (id)newExternFunctionWithName:(id)arg1;
- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 error:(id*)arg3;
- (void)newFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 functionCache:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithHash:(const struct { unsigned char x1[32]; }*)arg1;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 specializedName:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 specializedName:(id)arg4 error:(id*)arg5;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (id)newFunctionWithNameInternal:(id)arg1;
- (void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newMetalScript;
- (id)newSpecializedFunctionWithDescriptorInternal:(id)arg1 destinationArchive:(id)arg2 functionCache:(id)arg3 error:(id*)arg4;
- (id)newSpecializedFunctionWithHash:(const struct { unsigned char x1[32]; }*)arg1;
- (id)overrideTriple;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (void)setOverrideTriple:(id)arg1;
- (void)setShaderValidationEnabled:(bool)arg1;
- (bool)shaderValidationEnabled;
- (long long)type;
- (id)variableList;

@end

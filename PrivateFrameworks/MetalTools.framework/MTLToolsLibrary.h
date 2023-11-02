
@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>

@property (readonly) NSData *bitcodeData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSArray *externFunctionNames;
@property (readonly) NSArray *functionNames;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (copy) NSString *overrideTriple;
@property (nonatomic) bool shaderValidationEnabled;
@property (readonly) Class superclass;
@property (readonly) long long type;

- (id)bitcodeData;
- (void)dealloc;
- (id)device;
- (id)externFunctionNames;
- (id)functionNames;
- (id)installName;
- (id)label;
- (id)libraryIdentifier;
- (id)newExternFunctionWithName:(id)arg1;
- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 error:(id*)arg3;
- (id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)overrideTriple;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (void)setLabel:(id)arg1;
- (void)setOverrideTriple:(id)arg1;
- (void)setShaderValidationEnabled:(bool)arg1;
- (bool)shaderValidationEnabled;
- (long long)type;

@end

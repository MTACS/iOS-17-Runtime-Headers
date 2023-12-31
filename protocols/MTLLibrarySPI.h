
@protocol MTLLibrarySPI <MTLLibrary>

@required

- (NSData *)bitcodeData;
- (NSArray *)externFunctionNames;
- (NSUUID *)libraryIdentifier;
- (<MTLFunction> *)newExternFunctionWithName:(NSString *)arg1;
- (<MTLFunction> *)newFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 destinationArchive:(id <MTLBinaryArchive>)arg2 error:(id*)arg3;
- (void)newFunctionWithName:(void *)arg1 constantValues:(void *)arg2 pipelineLibrary:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, MTLFunctionConstantValues *, <MTLPipelineLibrary> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLFunction> *, NSError *, void*
- (<MTLFunction> *)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3 error:(id*)arg4;
- (NSString *)overrideTriple;
- (bool)serializeToURL:(NSURL *)arg1 error:(id*)arg2;
- (void)setOverrideTriple:(NSString *)arg1;
- (void)setShaderValidationEnabled:(bool)arg1;
- (bool)shaderValidationEnabled;

@end


@protocol MTLFunctionSPI <MTLFunction>

@required

- (NSArray *)arguments;
- (NSArray *)bindings;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (NSData *)bitcodeData;
- (MTLDebugInstrumentationData *)debugInstrumentationData;
- (NSString *)filePath;
- (<MTLFunctionHandle> *)functionHandle;
- (NSArray *)importedLibraries;
- (NSArray *)importedSymbols;
- (long long)lineNumber;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id <MTLPipelineLibrary>)arg2;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(NSArray *)arg3;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id <MTLPipelineLibrary>)arg3;
- (<MTLFunction> *)newFunctionWithPluginData:(NSData *)arg1 bitcodeType:(unsigned char)arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(NSArray *)arg2;
- (void)reflectionWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTLFunctionReflection *, void*
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id <MTLPipelineLibrary>)arg2;
- (NSArray *)relocations;
- (unsigned long long)renderTargetArrayIndexType;
- (MTLType *)returnType;
- (void)setRelocations:(NSArray *)arg1;
- (NSString *)unpackedFilePath;

@end

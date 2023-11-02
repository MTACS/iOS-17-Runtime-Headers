
@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {
    NSArray * _relocations;
}

@property (readonly) NSArray *arguments;
@property (readonly) NSArray *bindings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly, copy) NSString *filePath;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (nonatomic, readonly) <MTLFunctionHandle> *functionHandle;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (copy) NSString *label;
@property (readonly) long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) unsigned long long options;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property (nonatomic, copy) NSArray *relocations;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *unpackedFilePath;
@property (readonly) NSArray *vertexAttributes;

- (id)arguments;
- (id)bindings;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (id)bitcodeData;
- (void)dealloc;
- (id)debugInstrumentationData;
- (id)filePath;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionConstantsDictionary;
- (id)functionHandle;
- (id)functionInputs;
- (unsigned long long)functionType;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)initWithFunction:(id)arg1 library:(id)arg2;
- (id)label;
- (long long)lineNumber;
- (id)name;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (unsigned long long)options;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (id)precompiledOutput;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)relocations;
- (unsigned long long)renderTargetArrayIndexType;
- (id)returnType;
- (void)setLabel:(id)arg1;
- (void)setRelocations:(id)arg1;
- (id)stageInputAttributes;
- (id)unpackedFilePath;
- (id)vertexAttributes;

@end

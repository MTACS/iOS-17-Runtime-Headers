
@interface MTLDebugFunction : MTLToolsFunction {
    MTLFunctionConstantValues * _constantValues;
}

@property (retain) MTLFunctionConstantValues *constantValues;

- (id)bitcodeData;
- (id)constantValues;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
- (void)setConstantValues:(id)arg1;

@end

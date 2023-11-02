
@protocol MTLDynamicLibrarySPI <MTLDynamicLibrary>

@required

- (NSObject<OS_dispatch_data> *)binaryData;
- (MTLDebugInstrumentationData *)debugInstrumentationData;
- (NSArray *)exportedFunctions;
- (NSArray *)exportedVariables;
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (NSArray *)importedLibraries;
- (NSArray *)importedSymbols;
- (NSString *)libraryPath;
- (const struct { unsigned char x1[32]; }*)libraryUUID;
- (NSArray *)relocations;
- (bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1;
- (void)setRelocations:(NSArray *)arg1;
- (bool)shaderValidationEnabled;

@end

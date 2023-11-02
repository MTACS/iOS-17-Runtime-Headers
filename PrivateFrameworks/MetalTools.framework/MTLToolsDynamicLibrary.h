
@interface MTLToolsDynamicLibrary : MTLToolsObject <MTLDynamicLibrarySPI> {
    NSArray * _relocations;
}

@property (readonly) NSObject<OS_dispatch_data> *binaryData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSArray *exportedFunctions;
@property (readonly) NSArray *exportedVariables;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly) NSString *libraryPath;
@property (readonly) const struct { unsigned char x1[32]; }*libraryUUID;
@property (nonatomic, copy) NSArray *relocations;
@property (nonatomic, readonly) bool shaderValidationEnabled;
@property (readonly) Class superclass;

- (id)binaryData;
- (void)dealloc;
- (id)debugInstrumentationData;
- (id)device;
- (id)exportedFunctions;
- (id)exportedVariables;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)installName;
- (id)label;
- (id)libraryPath;
- (const struct { unsigned char x1[32]; }*)libraryUUID;
- (id)relocations;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDebugInstrumentationData:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRelocations:(id)arg1;
- (bool)shaderValidationEnabled;

@end

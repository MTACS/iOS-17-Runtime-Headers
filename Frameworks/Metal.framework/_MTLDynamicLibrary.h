
@interface _MTLDynamicLibrary : _MTLObjectWithLabel <MTLDynamicLibrarySPI> {
    MTLDynamicLibraryContainer * _container;
    NSString * _libraryPath;
    NSArray * _relocations;
    bool  _shaderValidationEnabled;
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

+ (unsigned int)dynamicLibraryTypeAtURL:(id)arg1 device:(id)arg2 error:(id*)arg3;

- (id)airData;
- (id)binaryData;
- (id)container;
- (void)dealloc;
- (id)debugInstrumentationData;
- (id)description;
- (id)device;
- (id)exportedFunctions;
- (id)exportedVariables;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)initWithLibrary:(id)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)installName;
- (id)libraryPath;
- (const struct { unsigned char x1[32]; }*)libraryUUID;
- (id)relocations;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDebugInstrumentationData:(id)arg1;
- (void)setRelocations:(id)arg1;
- (bool)shaderValidationEnabled;

@end

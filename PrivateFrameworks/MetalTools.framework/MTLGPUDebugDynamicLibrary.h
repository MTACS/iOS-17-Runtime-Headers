
@interface MTLGPUDebugDynamicLibrary : MTLToolsDynamicLibrary <MTLDynamicLibrarySPI> {
    MTLGPUDebugImageData * _imageData;
}

@property (readonly) NSObject<OS_dispatch_data> *binaryData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSArray *exportedFunctions;
@property (readonly) NSArray *exportedVariables;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MTLGPUDebugImageData *imageData;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly) NSString *libraryPath;
@property (readonly) const struct { unsigned char x1[32]; }*libraryUUID;
@property (nonatomic, copy) NSArray *relocations;
@property (nonatomic, readonly) bool shaderValidationEnabled;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)imageData;
- (id)initWithDynamicLibrary:(id)arg1 device:(id)arg2;
- (void)prepareForUsage;

@end

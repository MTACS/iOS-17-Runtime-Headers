
@interface CaptureMTLDynamicLibrary : NSObject <CaptureMTLObject, MTLDynamicLibrarySPI> {
    <MTLDynamicLibrarySPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
    <MTLLibrary> * parentLibrary;
}

@property (readonly) <MTLDynamicLibrary> *baseObject;
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
@property (nonatomic, retain) <MTLLibrary> *parentLibrary;
@property (nonatomic, copy) NSArray *relocations;
@property (nonatomic, readonly) bool shaderValidationEnabled;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (id)binaryData;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)label;
- (id)libraryPath;
- (id)originalObject;
- (id)parentLibrary;
- (id)relocations;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setLabel:(id)arg1;
- (void)setParentLibrary:(id)arg1;
- (void)setRelocations:(id)arg1;
- (bool)shaderValidationEnabled;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end

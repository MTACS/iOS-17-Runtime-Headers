
@interface MTLDynamicLibraryContainer : NSObject {
    NSData * _airData;
    unsigned long long  _airOffset;
    unsigned long long  _airSize;
    int  _airVersion;
    unsigned long long  _bitcodeOffset;
    unsigned long long  _bitcodeSize;
    MTLDebugInstrumentationData * _debugInstrumentationData;
    <MTLDevice> * _device;
    NSArray * _exportedFunctions;
    NSArray * _exportedVariables;
    MTLLoadedFile * _fileMapping;
    NSArray * _importedLibraries;
    NSArray * _importedSymbols;
    NSString * _installName;
    struct { 
        unsigned char key[32]; 
    }  _libraryUUID;
    NSObject<OS_dispatch_data> * _vendorData;
}

- (id)airData;
- (void)dealloc;
- (id)initWithLibrary:(struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (oneway void)release;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end

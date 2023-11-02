
@interface _MTLFunctionInternal : _MTLFunction {
    MTLFunctionConstantValuesInternal * _baseFunctionConstantValues;
    NSString * _baseLibraryFilePath;
    struct { 
        unsigned char key[32]; 
    }  _baseLibraryUUID;
    NSString * _filePath;
    struct MTLFunctionData { 
        unsigned long long bitCodeOffset; 
        unsigned long long bitCodeFileSize; 
        unsigned long long publicArgumentsOffset; 
        unsigned long long privateArgumentsOffset; 
        unsigned long long sourceArchiveOffset; 
        unsigned short airMajorVersion; 
        unsigned short airMinorVersion; 
        unsigned short languageMajorVersion; 
        unsigned short languageMinorVersion; 
        struct { 
            unsigned char key[32]; 
        } bitcodeHash; 
        unsigned char bitcodeType; 
        NSData *pluginData; 
        unsigned char renderTargetArrayIndexType; 
        unsigned int patchType : 2; 
        unsigned int controlPointCount : 6; 
        NSObject<OS_dispatch_data> *functionInputs; 
        struct { 
            unsigned char key[32]; 
        } baseFunctionHash; 
        NSObject<OS_dispatch_data> *specializationAirScript; 
    }  _functionData;
    NSObject<OS_dispatch_queue> * _functionQueue;
    long long  _lineNumber;
    unsigned char  _privateMetadataInitialized;
    void * _programObject;
    unsigned char  _publicMetadataInitialized;
    unsigned char  _sourceArchiveMetadataInitialized;
    unsigned char  _stitchableFunctionMetadataInitialized;
}

- (id).cxx_construct;
- (id)arguments;
- (id)baseFunctionConstantValues;
- (id)baseLibraryFilePath;
- (struct { unsigned char x1[32]; })baseLibraryUUID;
- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (unsigned long long)bitCodeOffset;
- (unsigned char)bitcodeType;
- (void)dealloc;
- (id)filePath;
- (id)functionConstants;
- (id)functionConstantsDictionary;
- (const struct MTLFunctionData { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; struct { unsigned char x_10_1_1[32]; } x10; unsigned char x11; id x12; unsigned char x13; unsigned int x14 : 2; unsigned int x15 : 6; id x16; struct { unsigned char x_17_1_1[32]; } x17; id x18; }*)functionData;
- (id)functionInputs;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)arg3 functionData:(struct MTLFunctionData { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; struct { unsigned char x_10_1_1[32]; } x10; unsigned char x11; id x12; unsigned char x13; unsigned int x14 : 2; unsigned int x15 : 6; id x16; struct { unsigned char x_17_1_1[32]; } x17; id x18; }*)arg4 device:(id)arg5;
- (void)initializePrivateMetadata;
- (void)initializePublicMetadata;
- (void)initializeSourceArchive;
- (void)initializeStitchableFunctionMetadata;
- (long long)lineNumber;
- (bool)needsFunctionConstantValues;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (id)newSpecializedFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 functionCache:(id)arg3 error:(id*)arg4;
- (void)newSpecializedFunctionWithDescriptor:(id)arg1 destinationArchive:(id)arg2 functionCache:(id)arg3 sync:(bool)arg4 completionHandler:(id /* block */)arg5;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (id)pluginData;
- (id)precompiledOutput;
- (void*)programObject;
- (id)relocations;
- (unsigned long long)renderTargetArrayIndexType;
- (id)returnType;
- (void)setArguments:(id)arg1;
- (void)setBitcodeType:(unsigned char)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFunctionConstantSpecializationHash:(const struct { unsigned char x1[32]; }*)arg1;
- (void)setFunctionConstants:(id)arg1;
- (void)setLineNumber:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPluginData:(id)arg1;
- (void)setPrecompiledOutput:(id)arg1;
- (void)setRelocations:(id)arg1;
- (void)setReturnType:(id)arg1;
- (void)setSourceArchiveOffset:(unsigned long long)arg1;
- (void)setStageInputAttributes:(id)arg1;
- (void)setUnpackedFilePath:(id)arg1;
- (void)setVertexAttributes:(id)arg1;
- (unsigned long long)sourceArchiveOffset;
- (id)specializationAirScript;
- (bool)specializedFunctionHash:(struct { unsigned char x1[32]; }*)arg1 requestData:(id*)arg2 airScript:(id*)arg3 constants:(id)arg4 specializedName:(id)arg5 privateFunctions:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)stageInputAttributes;
- (void)storeTrackingDataWithDescriptor:(id)arg1 function:(id)arg2 variantHash:(const struct { unsigned char x1[32]; }*)arg3;
- (id)unpackedFilePath;
- (id)vertexAttributes;

@end


@interface SAFrame : NSObject <SAJSONSerialization, SASerializable> {
    unsigned long long  _address;
    SABinaryLoadInfo * _binaryLoadInfo;
    union { 
        unsigned char bits; 
        struct { 
            unsigned int isSymbolicationOffByOne : 1; 
            unsigned int isSwiftAsync : 1; 
            unsigned int isKernel : 1; 
            unsigned int isTruncatedBacktraceFrame : 1; 
            unsigned int isLeafyCallstackIsInAnotherCallTreeFrame : 1; 
        } ; 
    }  _bools;
    id  _childFrameOrFrames;
    SAFrame * _parentFrame;
}

@property (readonly) unsigned long long address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SAInstruction *instruction;
@property (readonly) bool isFakeFrame;
@property (readonly) bool isKernel;
@property (readonly) bool isLeafyCallstackIsInAnotherCallTreeFrame;
@property (readonly) bool isRootFrame;
@property (readonly) bool isSwiftAsync;
@property (readonly) bool isSymbolicationOffByOne;
@property (readonly) bool isTruncatedBacktraceFrame;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (void)printFrameTree:(id)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned long long x6; union { unsigned char x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)address;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initCopyingFrame:(id)arg1 withParent:(id)arg2;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (bool)isFakeFrame;
- (bool)isKernel;
- (bool)isLeafyCallstackIsInAnotherCallTreeFrame;
- (bool)isRootFrame;
- (bool)isSwiftAsync;
- (bool)isSymbolicationOffByOne;
- (bool)isTruncatedBacktraceFrame;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

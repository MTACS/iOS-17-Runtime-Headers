
@interface SABinaryLoadInfo : NSObject <SAJSONSerialization, SASerializable> {
    SABinary * _binary;
    unsigned long long  _loadAddress;
    SASegment * _segment;
}

@property (readonly) SABinary *binary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isInKernelAddressSpace;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long loadAddress;
@property (readonly) SASegment *segment;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textSegmentLoadAddress;

+ (id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2;
+ (id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2 libraryCache:(id)arg3;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)arg1;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 dataGatheringOptions:(unsigned long long)arg2;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; union { unsigned char x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)binary;
- (id)debugDescription;
- (id)initWithBinary:(id)arg1 segment:(id)arg2 loadAddress:(unsigned long long)arg3;
- (id)instructionAtOffsetIntoLoadInfo:(unsigned long long)arg1;
- (bool)isInKernelAddressSpace;
- (unsigned long long)length;
- (unsigned long long)loadAddress;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (id)segment;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)textSegmentLoadAddress;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

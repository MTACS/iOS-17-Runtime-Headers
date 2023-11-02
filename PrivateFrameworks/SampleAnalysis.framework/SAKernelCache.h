
@interface SAKernelCache : NSObject <SAJSONSerialization, SALibraryCache> {
    NSArray * _binaryLoadInfos;
    unsigned long long  _loadAddress;
    NSUUID * _uuid;
}

@property (retain) NSArray *binaryLoadInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long endAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long loadAddress;
@property (readonly) unsigned long long startAddress;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textSegmentsEndAddress;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) NSUUID *uuid;

+ (id)classDictionaryKey;
+ (void)clearCaches;
+ (id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)binaryLoadInfos;
- (id)debugDescription;
- (unsigned long long)endAddress;
- (unsigned long long)loadAddress;
- (bool)matchesUUID:(unsigned char)arg1 loadAddress:(unsigned long long)arg2;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setBinaryLoadInfos:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)startAddress;
- (unsigned long long)textSegmentsEndAddress;
- (unsigned long long)textSegmentsStartAddress;
- (id)uuid;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

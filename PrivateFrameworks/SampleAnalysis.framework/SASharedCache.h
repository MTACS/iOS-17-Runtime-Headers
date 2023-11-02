
@interface SASharedCache : NSObject <SAJSONSerialization, SALibraryCache, SASerializable> {
    NSArray * _binaryLoadInfos;
    bool  _defunct;
    int  _flags;
    unsigned int  _sharedCacheID;
    unsigned long long  _slidBaseAddress;
    unsigned long long  _slide;
    NSUUID * _uuid;
}

@property (retain) NSArray *binaryLoadInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long endAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long slidBaseAddress;
@property (readonly) unsigned long long slide;
@property (readonly) unsigned long long startAddress;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textSegmentsEndAddress;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) NSUUID *uuid;

+ (void)addDSCSymData:(id)arg1;
+ (void)addDscSymDir:(id)arg1;
+ (id)classDictionaryKey;
+ (void)clearCaches;
+ (id)currentSharedCache;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 slidBaseAddress:(unsigned long long)arg3;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)binaryLoadInfos;
- (id)debugDescription;
- (unsigned long long)endAddress;
- (bool)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2;
- (bool)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2 slidBaseAddress:(unsigned long long)arg3;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setBinaryLoadInfos:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)slidBaseAddress;
- (unsigned long long)slide;
- (unsigned long long)startAddress;
- (unsigned long long)textSegmentsEndAddress;
- (unsigned long long)textSegmentsStartAddress;
- (id)uuid;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

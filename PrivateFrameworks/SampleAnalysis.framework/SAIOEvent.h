
@interface SAIOEvent : NSObject <SASerializable> {
    unsigned long long  _blockNumber;
    SATimestamp * _endTimestamp;
    unsigned int  _rawType;
    unsigned long long  _size;
    SATimestamp * _startTimestamp;
    unsigned long long  _threadID;
    unsigned int  _tier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) bool isRead;
@property (readonly) unsigned long long size;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadID;
@property (readonly) unsigned int tier;
@property (readonly) NSString *type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)typeString:(unsigned int)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned long long x10; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (id)endTimestamp;
- (id)initWithStartTime:(id)arg1 threadID:(unsigned long long)arg2 blockNumber:(unsigned long long)arg3 size:(unsigned long long)arg4 type:(unsigned long long)arg5 tier:(unsigned int)arg6;
- (bool)isRead;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setEndTimestamp:(id)arg1;
- (unsigned long long)size;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)startTimestamp;
- (unsigned long long)threadID;
- (unsigned int)tier;
- (id)type;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

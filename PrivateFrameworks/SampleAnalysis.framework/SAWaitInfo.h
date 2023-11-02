
@interface SAWaitInfo : SABlockingInfo <SASerializable> {
    unsigned long long  _context;
    unsigned long long  _owner;
    unsigned short  _type;
}

@property (readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long owner;
@property (readonly) Class superclass;
@property (readonly) unsigned short type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (int)blockingPid;
- (unsigned long long)blockingTid;
- (long long)compare:(id)arg1;
- (unsigned long long)context;
- (id)debugDescription;
- (id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 options:(unsigned long long)arg3 nameCallback:(id /* block */)arg4;
- (unsigned long long)hash;
- (id)init;
- (id)initWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; short x5; unsigned int x6; }*)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)owner;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned short)type;

@end

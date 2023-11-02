
@interface SATurnstileInfo : SABlockingInfo <SASerializable> {
    unsigned long long  _context;
    unsigned long long  _flags;
    unsigned char  _numHops;
    unsigned char  _priority;
}

@property (readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned char numHops;
@property (readonly) unsigned char priority;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned char x4; unsigned char x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (int)blockingPid;
- (unsigned long long)blockingTid;
- (long long)compare:(id)arg1;
- (unsigned long long)context;
- (id)debugDescription;
- (id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 threadPriority:(int)arg3 options:(unsigned long long)arg4 nameCallback:(id /* block */)arg5;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo_v2 { unsigned long long x1; unsigned long long x2; unsigned char x3; unsigned char x4; unsigned long long x5; short x6; }*)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)numHops;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned char)priority;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end

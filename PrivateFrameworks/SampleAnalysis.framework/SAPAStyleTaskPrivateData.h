
@interface SAPAStyleTaskPrivateData : NSObject <SASerializable> {
    int  _cow_faults;
    int  _faults;
    unsigned int  _latency_qos;
    int  _pageins;
    unsigned long long  _ss_flags;
    int  _suspend_count;
    unsigned long long  _task_size_bytes;
    unsigned long long  _terminatedThreadsCycles;
    unsigned long long  _terminatedThreadsInstructions;
    unsigned long long  _terminatedThreadsSystemTimeInNs;
    unsigned long long  _terminatedThreadsUserTimeInNs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end

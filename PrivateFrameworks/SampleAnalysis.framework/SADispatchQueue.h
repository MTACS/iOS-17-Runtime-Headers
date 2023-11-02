
@interface SADispatchQueue : SARecipe <SASerializable> {
    NSString * _dispatchQueueLabel;
    bool  _hasConcurrentExecution;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) NSString *dispatchQueueLabel;
@property (readonly) NSArray *dispatchQueueStates;
@property (readonly) bool hasConcurrentExecution;
@property (readonly) unsigned long long hash;
@property (readonly) bool isConcurrent;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned int x4; union { unsigned short x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (id)dispatchQueueLabel;
- (id)dispatchQueueStates;
- (bool)hasConcurrentExecution;
- (bool)isConcurrent;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end

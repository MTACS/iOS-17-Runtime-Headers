
@protocol SASerializable <NSObject>

@required

+ (NSString *)classDictionaryKey;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary *)arg3;
- (void)addSelfToSerializationDictionary:(NSMutableDictionary *)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

@optional

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary *)arg3 andDataBufferDictionary:(NSMutableDictionary *)arg4;

- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary *)arg3 andDataBufferDictionary:(NSMutableDictionary *)arg4;

@end

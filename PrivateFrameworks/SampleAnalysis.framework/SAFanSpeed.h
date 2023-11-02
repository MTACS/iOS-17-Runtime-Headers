
@interface SAFanSpeed : NSObject <SASerializable> {
    int  _fanSpeed;
    SATimestamp * _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int fanSpeed;
@property (readonly) bool fanSpeedIsValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; int x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (int)fanSpeed;
- (bool)fanSpeedIsValid;
- (id)init;
- (id)initEmpty;
- (id)initWithTimestamp:(id)arg1;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)timestamp;

@end

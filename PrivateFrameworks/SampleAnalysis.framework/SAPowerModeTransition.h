
@interface SAPowerModeTransition : NSObject <SAJSONSerialization, SASerializable> {
    bool  _lowPowerMode;
    bool  _lowPowerModeChanged;
    SATimestamp * _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool lowPowerMode;
@property (readonly) bool lowPowerModeChanged;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; union { unsigned long long x_3_1_1; struct { bool x_2_2_1; bool x_2_2_2; } x_3_1_2; } x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (bool)lowPowerMode;
- (bool)lowPowerModeChanged;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)timestamp;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

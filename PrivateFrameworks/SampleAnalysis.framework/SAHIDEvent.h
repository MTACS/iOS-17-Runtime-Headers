
@interface SAHIDEvent : NSObject <SASerializable> {
    SATimestamp * _hidEventTimestamp;
    unsigned int  _hidEventType;
    NSMutableArray * _steps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SATimestamp *hidEventTimestamp;
@property (readonly) unsigned int hidEventType;
@property (readonly) NSString *hidEventTypeString;
@property (readonly) NSArray *steps;
@property (readonly) Class superclass;
@property (readonly) double thresholdToGroupSameEventType;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (void)parseKTrace:(struct ktrace_session { }*)arg1 findingHIDEvents:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (id)hidEventTimestamp;
- (unsigned int)hidEventType;
- (id)hidEventTypeString;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)steps;
- (double)thresholdToGroupSameEventType;

@end

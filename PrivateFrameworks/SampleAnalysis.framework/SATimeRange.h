
@interface SATimeRange : NSObject <NSCopying, SAJSONSerialization, SASerializable> {
    SATimestamp * _endTime;
    SATimestamp * _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long deltaMachAbsTime;
@property (readonly) double deltaMachAbsTimeSeconds;
@property (readonly) unsigned long long deltaMachContTime;
@property (readonly) double deltaMachContTimeSeconds;
@property (readonly) double deltaWallTime;
@property (readonly, copy) NSString *description;
@property (readonly) SATimestamp *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) SATimestamp *startTime;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)timeRangeStart:(id)arg1 end:(id)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned long long)deltaMachAbsTime;
- (double)deltaMachAbsTimeSeconds;
- (unsigned long long)deltaMachContTime;
- (double)deltaMachContTimeSeconds;
- (double)deltaWallTime;
- (id)endTime;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)startTime;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

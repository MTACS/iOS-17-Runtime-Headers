
@interface SATimestamp : NSObject <NSCopying, SAJSONSerialization, SASerializable> {
    unsigned long long  _machAbsTime;
    double  _machAbsTimeSeconds;
    unsigned long long  _machContTime;
    double  _machContTimeSeconds;
    double  _wallTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long machAbsTime;
@property (readonly) double machAbsTimeSeconds;
@property (readonly) unsigned long long machContTime;
@property (readonly) double machContTimeSeconds;
@property (readonly) Class superclass;
@property (readonly) double wallTime;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)timestamp;
+ (id)timestampWithMachAbsTime:(unsigned long long)arg1 machAbsTimeSec:(double)arg2 machContTime:(unsigned long long)arg3 machContTimeSec:(double)arg4 wallTime:(double)arg5;
+ (id)timestampWithMachAbsTime:(unsigned long long)arg1 machContTime:(unsigned long long)arg2 wallTime:(double)arg3 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg4;

- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; double x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)eq:(id)arg1;
- (bool)ge:(id)arg1;
- (bool)gt:(id)arg1;
- (void)guessMissingTimesBasedOnCurrentTime;
- (void)guessMissingTimesBasedOnTimestamp:(id)arg1;
- (id)initWithMachAbsTime:(unsigned long long)arg1 machAbsTimeSec:(double)arg2 machContTime:(unsigned long long)arg3 machContTimeSec:(double)arg4 wallTime:(double)arg5;
- (bool)isEqualToTimestamp:(id)arg1;
- (bool)le:(id)arg1;
- (bool)lt:(id)arg1;
- (unsigned long long)machAbsTime;
- (double)machAbsTimeSeconds;
- (unsigned long long)machContTime;
- (double)machContTimeSeconds;
- (bool)ne:(id)arg1;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)wallTime;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

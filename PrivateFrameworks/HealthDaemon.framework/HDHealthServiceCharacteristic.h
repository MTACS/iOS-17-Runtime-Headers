
@interface HDHealthServiceCharacteristic : NSObject <HDHealthServiceCharacteristic> {
    NSDate * _updateTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *updateTime;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (id)buildWithBinaryValue:(id)arg1 updateTime:(id)arg2 error:(id*)arg3;
+ (id)dateFromData:(const char **)arg1 before:(const char *)arg2 calendar:(id)arg3;
+ (double)doubleFromFLOAT:(unsigned int)arg1;
+ (double)doubleFromFLOATData:(const char **)arg1 before:(const char *)arg2;
+ (float)floatFromSFLOAT:(unsigned short)arg1;
+ (float)floatFromSFLOATData:(const char **)arg1 before:(const char *)arg2;
+ (short)int16FromData:(const char **)arg1 before:(const char *)arg2;
+ (bool)uint16:(unsigned short)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (unsigned short)uint16FromData:(const char **)arg1 before:(const char *)arg2;
+ (unsigned int)uint24FromData:(const char **)arg1 before:(const char *)arg2;
+ (bool)uint32:(unsigned int)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (unsigned int)uint32FromData:(const char **)arg1 before:(const char *)arg2;
+ (bool)uint8:(unsigned char)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (unsigned char)uint8FromData:(const char **)arg1 before:(const char *)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)getBinaryValueWithError:(id*)arg1;
- (void)unitTest_setUpdateTime:(id)arg1;
- (id)updateTime;

@end

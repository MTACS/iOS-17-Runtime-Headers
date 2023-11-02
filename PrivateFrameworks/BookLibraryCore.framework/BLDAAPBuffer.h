
@interface BLDAAPBuffer : NSObject {
    NSData * _data;
}

@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (long long)appendHeader:(unsigned int)arg1 size:(unsigned int)arg2;
- (long long)appendUInt32:(unsigned int)arg1 withCode:(unsigned int)arg2;
- (long long)appendUInt64:(unsigned long long)arg1 withCode:(unsigned int)arg2;
- (long long)appendUInt8:(unsigned char)arg1 withCode:(unsigned int)arg2;
- (id)data;
- (id)init;

@end

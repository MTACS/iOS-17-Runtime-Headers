
@interface TVRMSDAAPEncoder : NSObject {
    NSMutableData * _data;
}

@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (id)data;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forCode:(unsigned int)arg3;
- (void)encodeData:(id)arg1 forCode:(unsigned int)arg2;
- (void)encodeInt32:(int)arg1 forCode:(unsigned int)arg2;
- (void)encodeInt64:(long long)arg1 forCode:(unsigned int)arg2;
- (void)encodeString:(id)arg1 forCode:(unsigned int)arg2;
- (id)init;

@end

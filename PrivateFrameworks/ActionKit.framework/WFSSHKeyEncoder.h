
@interface WFSSHKeyEncoder : NSObject {
    NSMutableData * _data;
}

@property (nonatomic, readonly) NSMutableData *data;
@property (nonatomic, readonly) NSData *encodedData;
@property (nonatomic, readonly) unsigned long long encodedLength;

- (void).cxx_destruct;
- (id)data;
- (void)encodeChar:(BOOL)arg1;
- (void)encodeData:(id)arg1;
- (void)encodeDataWithPreceedingLength:(id)arg1;
- (void)encodeInteger:(unsigned int)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeStringWithPreceedingLength:(id)arg1;
- (id)encodedData;
- (unsigned long long)encodedLength;
- (id)init;

@end

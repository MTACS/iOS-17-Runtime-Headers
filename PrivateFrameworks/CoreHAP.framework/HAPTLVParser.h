
@interface HAPTLVParser : HMFObject {
    NSData * _tlvData;
}

+ (id)parserWithData:(id)arg1;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)parseResponseForArray:(unsigned long long)arg1;
- (id)parseResponseForData:(unsigned long long)arg1;
- (id)parseResponseForNumber:(unsigned long long)arg1;
- (id)parseResponseForString:(unsigned long long)arg1;
- (id)parseResponseForUInt16:(unsigned long long)arg1;
- (id)parseResponseForUInt8:(unsigned long long)arg1;
- (id)parseResponseForUUID:(unsigned long long)arg1;

@end

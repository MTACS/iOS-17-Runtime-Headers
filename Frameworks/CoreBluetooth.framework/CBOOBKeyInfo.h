
@interface CBOOBKeyInfo : NSObject <CUXPCCodable> {
    NSData * _btAddressData;
    unsigned char  _btAddressType;
    NSData * _irkData;
    unsigned char  _keyType;
    unsigned short  _version;
}

@property (nonatomic, copy) NSData *btAddressData;
@property (nonatomic) unsigned char btAddressType;
@property (nonatomic, copy) NSData *irkData;
@property (nonatomic) unsigned char keyType;
@property (nonatomic) unsigned short version;

- (void).cxx_destruct;
- (id)btAddressData;
- (unsigned char)btAddressType;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (unsigned long long)hash;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)irkData;
- (bool)isEqual:(id)arg1;
- (unsigned char)keyType;
- (unsigned long long)proxyHash;
- (void)setBtAddressData:(id)arg1;
- (void)setBtAddressType:(unsigned char)arg1;
- (void)setIrkData:(id)arg1;
- (void)setKeyType:(unsigned char)arg1;
- (void)setVersion:(unsigned short)arg1;
- (unsigned short)version;

@end

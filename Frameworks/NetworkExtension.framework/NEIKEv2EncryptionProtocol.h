
@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    bool  _is256Bit;
    unsigned long long  _wireType;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEncryptionType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end

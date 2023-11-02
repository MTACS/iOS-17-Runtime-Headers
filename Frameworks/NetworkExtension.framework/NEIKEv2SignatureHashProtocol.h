
@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying> {
    unsigned long long  _hashType;
}

@property (nonatomic, readonly) unsigned long long hashType;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)hashType;
- (id)initWithHashType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end

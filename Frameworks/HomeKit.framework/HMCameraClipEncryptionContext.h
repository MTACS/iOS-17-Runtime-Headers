
@interface HMCameraClipEncryptionContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _key;
    unsigned long long  _scheme;
}

@property (readonly, copy) NSData *key;
@property (readonly) unsigned long long scheme;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 scheme:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned long long)scheme;

@end

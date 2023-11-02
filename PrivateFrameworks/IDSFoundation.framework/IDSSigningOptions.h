
@interface IDSSigningOptions : NSObject <NSCopying, NSSecureCoding> {
    IDSSigningKeyDiversifier * _keyDiversifier;
    unsigned int  _keyType;
}

@property (nonatomic, retain) IDSSigningKeyDiversifier *keyDiversifier;
@property (nonatomic) unsigned int keyType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyType:(unsigned int)arg1 diversifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyDiversifier;
- (unsigned int)keyType;
- (void)setKeyDiversifier:(id)arg1;
- (void)setKeyType:(unsigned int)arg1;

@end

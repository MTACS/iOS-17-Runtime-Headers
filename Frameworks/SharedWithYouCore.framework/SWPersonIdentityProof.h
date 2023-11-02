
@interface SWPersonIdentityProof : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _inclusionHashes;
    unsigned long long  _localKeyIndex;
    NSData * _publicKey;
}

@property (nonatomic, readonly, copy) NSArray *inclusionHashes;
@property (nonatomic) unsigned long long localKeyIndex;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic, readonly) unsigned long long publicKeyIndex;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)inclusionHashes;
- (id)initWithCoder:(id)arg1;
- (id)initWithInclusionHashes:(id)arg1;
- (id)initWithInclusionHashes:(id)arg1 publicKey:(id)arg2 localKeyIndex:(unsigned long long)arg3;
- (unsigned long long)localKeyIndex;
- (id)publicKey;
- (unsigned long long)publicKeyIndex;
- (void)setLocalKeyIndex:(unsigned long long)arg1;
- (void)setPublicKey:(id)arg1;

@end

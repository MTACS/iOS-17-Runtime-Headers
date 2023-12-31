
@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier {
    id  _rsaKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;

+ (Class)keyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bitSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBitSize:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBitSize:(long long)arg1;

@end

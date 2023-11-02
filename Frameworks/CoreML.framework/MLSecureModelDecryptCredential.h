
@interface MLSecureModelDecryptCredential : NSObject <NSSecureCoding> {
    long long  _cryptoKey;
}

@property (nonatomic) long long cryptoKey;

+ (bool)supportsSecureCoding;

- (long long)cryptoKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCryptoKey:(long long)arg1;

@end

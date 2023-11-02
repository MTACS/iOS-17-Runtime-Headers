
@interface _SFCiphertext : NSObject <NSCopying, NSSecureCoding> {
    id  _ciphertextInternal;
}

@property (readonly) NSData *ciphertext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ciphertext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

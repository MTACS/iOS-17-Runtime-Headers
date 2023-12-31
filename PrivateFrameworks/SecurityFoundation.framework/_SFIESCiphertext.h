
@interface _SFIESCiphertext : _SFCiphertext {
    id  _iesCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) _SFECPublicKey *ephemeralSenderPublicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationCode;
- (void)encodeWithCoder:(id)arg1;
- (id)ephemeralSenderPublicKey;
- (id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

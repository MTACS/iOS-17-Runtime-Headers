
@interface SFX509TrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id  _x509TrustPolicyInternal;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end


@interface DCCredentialAttestation : NSObject <NSSecureCoding> {
    NSData * _attestationData;
    unsigned long long  _attestationType;
}

@property (retain) NSData *attestationData;
@property unsigned long long attestationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestationData;
- (unsigned long long)attestationType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 type:(unsigned long long)arg2;
- (void)setAttestationData:(id)arg1;
- (void)setAttestationType:(unsigned long long)arg1;

@end

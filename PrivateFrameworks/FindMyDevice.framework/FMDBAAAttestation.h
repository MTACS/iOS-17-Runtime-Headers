
@interface FMDBAAAttestation : NSObject <NSSecureCoding> {
    NSData * _attestation;
    NSData * _signature;
}

@property (nonatomic, retain) NSData *attestation;
@property (nonatomic, retain) NSData *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttestation:(id)arg1 signature:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAttestation:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end

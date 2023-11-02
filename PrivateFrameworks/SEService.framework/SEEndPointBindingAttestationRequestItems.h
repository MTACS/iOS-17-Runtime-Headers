
@interface SEEndPointBindingAttestationRequestItems : NSObject <NSSecureCoding> {
    NSData * _casdECDSACertificate;
    NSData * _casdRSACertificate;
    NSData * _subCAAttestation;
}

@property (nonatomic, retain) NSData *casdECDSACertificate;
@property (nonatomic, retain) NSData *casdRSACertificate;
@property (nonatomic, retain) NSData *subCAAttestation;

+ (bool)supportsSecureCoding;
+ (id)withSubCAAttestation:(id)arg1 casdECDSACertificate:(id)arg2 casdRSACertificate:(id)arg3;

- (void).cxx_destruct;
- (id)casdECDSACertificate;
- (id)casdRSACertificate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCasdECDSACertificate:(id)arg1;
- (void)setCasdRSACertificate:(id)arg1;
- (void)setSubCAAttestation:(id)arg1;
- (id)subCAAttestation;

@end

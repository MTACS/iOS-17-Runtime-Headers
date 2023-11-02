
@interface VNImageFingerprintsObservation : VNObservation {
    NSArray * _fingerprintHashes;
}

@property (readonly, copy) NSArray *fingerprintHashes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerprintHashes;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 fingerprintHashes:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

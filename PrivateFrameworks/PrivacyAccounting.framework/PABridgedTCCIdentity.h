
@interface PABridgedTCCIdentity : NSObject <NSSecureCoding> {
    NSObject<OS_tcc_identity> * _identity;
}

@property (nonatomic, readonly) NSObject<OS_tcc_identity> *identity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithTCCIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

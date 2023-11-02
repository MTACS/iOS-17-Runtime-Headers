
@interface SESLegacyKeySignResponse : NSObject <NSSecureCoding> {
    NSNumber * _localValidationVerified;
    NSData * _signature;
}

@property (nonatomic, retain) NSNumber *localValidationVerified;
@property (nonatomic, retain) NSData *signature;

+ (bool)supportsSecureCoding;
+ (id)withSignature:(id)arg1 localValidationVerified:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localValidationVerified;
- (void)setLocalValidationVerified:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end

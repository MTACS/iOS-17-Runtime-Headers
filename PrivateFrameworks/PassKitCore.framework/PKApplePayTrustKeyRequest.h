
@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding> {
    NSString * _keyIdentifier;
    NSData * _subjectIdentifier;
}

@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSData *subjectIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 subjectIdentifier:(id)arg2;
- (id)keyIdentifier;
- (id)subjectIdentifier;

@end

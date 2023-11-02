
@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier {
    NSString * _identifierString;
}

@property (readonly, copy) NSString *identifierString;

+ (id)namespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierString;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifierString:(id)arg1;
- (bool)isAuthenticated;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)senderCorrelationIdentifier;

@end


@interface PKCarShareAcceptanceResponse : NSObject <NSSecureCoding> {
    NSString * _passUniqueIdentifier;
    PKAppletSubcredential * _subcredential;
}

@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) PKAppletSubcredential *subcredential;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCarShareAcceptanceResponse:(id)arg1;
- (id)passUniqueIdentifier;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setSubcredential:(id)arg1;
- (id)subcredential;

@end

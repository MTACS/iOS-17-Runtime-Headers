
@interface BMAccount : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _biomeAccountIdentifier;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSString *biomeAccountIdentifier;

+ (id)biomeIdentifierForAccountIdentifier:(id)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)biomeAccountIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithBiomeAccountIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

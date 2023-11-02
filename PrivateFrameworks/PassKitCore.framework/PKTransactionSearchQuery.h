
@interface PKTransactionSearchQuery : PKSearchQuery {
    NSString * _passUniqueIdentifier;
}

@property (nonatomic, retain) NSString *passUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 keyboardLanguage:(id)arg2 passUniqueIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)passUniqueIdentifier;
- (void)setPassUniqueIdentifier:(id)arg1;

@end

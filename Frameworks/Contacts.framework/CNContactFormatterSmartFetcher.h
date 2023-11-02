
@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSDictionary * _fallBackNamePropertyByNameKey;
    bool  _ignoresNickname;
    bool  _ignoresOrganization;
    NSSet * _mandatoryNameProperties;
}

@property (nonatomic) bool ignoresNickname;
@property (nonatomic) bool ignoresOrganization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)ignoresNickname;
- (bool)ignoresOrganization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setIgnoresNickname:(bool)arg1;
- (void)setIgnoresOrganization:(bool)arg1;

@end

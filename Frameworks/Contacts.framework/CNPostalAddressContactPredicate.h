
@interface CNPostalAddressContactPredicate : CNPredicate {
    CNPostalAddress * _postalAddress;
}

@property (nonatomic, readonly, copy) CNPostalAddress *postalAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)postalAddress;

@end

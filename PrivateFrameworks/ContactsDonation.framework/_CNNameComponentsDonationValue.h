
@interface _CNNameComponentsDonationValue : CNDonationValue {
    NSPersonNameComponents * _nameComponents;
}

@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNameComponents:(id)arg1 origin:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (void)updatePropertyListRepresentation:(id)arg1;

@end

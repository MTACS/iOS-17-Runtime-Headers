
@interface CNInstantMessageAddressContactPredicate : CNPredicate {
    CNInstantMessageAddress * _imAddress;
}

@property (nonatomic, readonly, copy) CNInstantMessageAddress *imAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imAddress;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstantMessageAddress:(id)arg1;

@end

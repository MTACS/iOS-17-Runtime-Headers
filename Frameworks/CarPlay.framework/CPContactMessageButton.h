
@interface CPContactMessageButton : CPButton {
    NSString * _phoneOrEmail;
}

@property (nonatomic, readonly, copy) NSString *phoneOrEmail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneOrEmail:(id)arg1;
- (id)phoneOrEmail;

@end


@interface SMContactInformation : NSObject <NSSecureCoding> {
    NSString * _email;
    NSString * _phoneNumber;
}

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1 phoneNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;

@end


@interface SMEmergencyContact : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _name;
    NSString * _phoneNumber;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3;
- (id)name;
- (id)phoneNumber;

@end

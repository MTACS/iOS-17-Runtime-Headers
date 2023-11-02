
@interface HMAccessoryAllowedHost : NSObject <NSSecureCoding> {
    NSSet * _addresses;
    NSString * _name;
    unsigned long long  _purpose;
    bool  _unrestricted;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSSet *addresses;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long purpose;
@property (getter=isUnrestricted, nonatomic, readonly) bool unrestricted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)addresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isUnrestricted;
- (id)name;
- (unsigned long long)purpose;

@end

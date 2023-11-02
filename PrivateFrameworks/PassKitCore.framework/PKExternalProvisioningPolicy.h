
@interface PKExternalProvisioningPolicy : NSObject <NSSecureCoding> {
    NSDictionary * _deviceLimits;
    NSString * _type;
}

@property (nonatomic, retain) NSDictionary *deviceLimits;
@property (nonatomic, retain) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceLimits;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExternalProvisioningPolicy:(id)arg1;
- (void)setDeviceLimits:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

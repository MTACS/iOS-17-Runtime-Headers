
@interface PKExternalProvisioningOptions : NSObject <NSSecureCoding> {
    NSArray * _devices;
    PKExternalProvisioningPolicy * _policy;
}

@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, retain) PKExternalProvisioningPolicy *policy;

+ (id)mockOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExternalProvisioningOptions:(id)arg1;
- (id)policy;
- (void)setDevices:(id)arg1;
- (void)setPolicy:(id)arg1;

@end


@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject {
    NSArray * _profiles;
}

@property (nonatomic, readonly, copy) NSArray *profiles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1;
- (id)profiles;

@end

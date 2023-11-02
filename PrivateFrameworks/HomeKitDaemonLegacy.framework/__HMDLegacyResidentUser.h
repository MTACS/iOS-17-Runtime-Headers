
@interface __HMDLegacyResidentUser : HMDUser {
    HMDResidentUser * _residentUser;
}

@property (nonatomic, readonly) HMDResidentUser *residentUser;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResidentUser:(id)arg1;
- (bool)isRemoteGateway;
- (id)residentUser;

@end

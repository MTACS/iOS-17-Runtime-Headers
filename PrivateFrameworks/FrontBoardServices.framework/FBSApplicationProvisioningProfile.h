
@interface FBSApplicationProvisioningProfile : NSObject {
    NSString * _UUID;
    NSString * _allowedApplicationIdentifierEntitlement;
    bool  _appleInternalProfile;
    bool  _beta;
    NSDate * _expirationDate;
    bool  _freeDeveloperProfile;
    bool  _provisionsAllDevices;
    NSString * _signerIdentity;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (getter=isAppleInternalProfile, nonatomic, readonly) bool appleInternalProfile;
@property (getter=isBeta, nonatomic, readonly) bool beta;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isFreeDeveloperProfile, nonatomic, readonly) bool freeDeveloperProfile;
@property (nonatomic, readonly) bool provisionsAllDevices;
@property (nonatomic, readonly, copy) NSString *signerIdentity;

- (void).cxx_destruct;
- (id)UUID;
- (bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)expirationDate;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;
- (bool)isAppleInternalProfile;
- (bool)isBeta;
- (bool)isFreeDeveloperProfile;
- (bool)provisionsAllDevices;
- (id)signerIdentity;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

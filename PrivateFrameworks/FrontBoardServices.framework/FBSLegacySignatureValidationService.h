
@interface FBSLegacySignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {
    FBSApplicationInfo * _appInfo;
    bool  _hasFreeDeveloperProvisioningProfile;
    bool  _hasUniversalProvisioningProfile;
    bool  _isManaged;
    NSArray * _provisioningProfiles;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeProfiles:(id)arg1;
- (id)_workQueue_expirationDateForProvisioningProfile;
- (bool)_workQueue_signatureNeedsExplicitUserTrust;
- (id)initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(bool)arg3;
- (unsigned long long)trustStateForApplication:(id)arg1;

@end


@interface SBSoftwareUpdateService : NSObject <SBSystemServiceServerSoftwareUpdateDelegate> {
    FBServiceClientAuthenticator * _serviceClientSoftwareUpdatePasscodePolicyEntitlementAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 passcodePolicy:(id /* block */)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setPasscodePolicy:(long long)arg3;

@end

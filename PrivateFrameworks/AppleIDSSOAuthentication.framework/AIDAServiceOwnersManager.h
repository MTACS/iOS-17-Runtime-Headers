
@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol> {
    ACAccountStore * _accountStore;
    NSDictionary * _serviceOwners;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceOwnersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *serviceOwners;
@property (readonly) Class superclass;

+ (id)_sharedTelemetryReporter;
+ (id)serviceOwnerBundles;
+ (id)supportedServices;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1 service:(id)arg2;
- (id)_buildServiceOwnerMapping;
- (void)_completeSignInSignpost:(struct { unsigned long long x1; unsigned long long x2; })arg1 forService:(id)arg2 context:(id)arg3 success:(bool)arg4 error:(id)arg5;
- (id)_postCloudSupportedServicesForAltDSID:(id)arg1;
- (void)_publishSignInTelemetryEventForContext:(id)arg1;
- (id)accountForService:(id)arg1;
- (id)altDSIDForAccount:(id)arg1 service:(id)arg2;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
- (id)serviceOwners;
- (void)setServiceOwners:(id)arg1;
- (void)signInService:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)signInToAllServicesInBackground:(bool)arg1 usingContext:(id)arg2 completion:(id /* block */)arg3;
- (void)signInToAllServicesInBackgroundUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)signInToServices:(id)arg1 usingContext:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutOfAllServicesUsingContext:(id)arg1 completion:(id /* block */)arg2;
- (void)signOutOfServices:(id)arg1 usingContext:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutService:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end

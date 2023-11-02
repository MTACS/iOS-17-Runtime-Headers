
@interface HDAuthorizationStoreResetServer : HDStandardTaskServer <HKAuthorizationStoreResetServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_recalibrateEstimatesForSampleType:(id)arg1 effectiveDate:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_resetAuthorizationStatusesForObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(id /* block */)arg3;

@end


@interface HDAuthorizationStoreReadServer : HDStandardTaskServer <HKAuthorizationStoreReadServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchAuthorizationContextForPromptSession:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAuthorizationRecordsForSourceBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAuthorizationRecordsForType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAuthorizationStatusesForDocumentType:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchAuthorizationStatusesForSampleUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_validateRecalibrateEstimatesRequestRecord:(id)arg1 completion:(id /* block */)arg2;

@end

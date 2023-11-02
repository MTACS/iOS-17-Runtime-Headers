
@interface HDSharingRecipientAuthorizationStoreServer : HDStandardTaskServer <HDSharingAuthorizationManagerObserver, HKSharingRecipientAuthorizationStoreServerInterface> {
    HKSharingRecipientAuthorizationStoreTaskConfiguration * _configuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_addSharingAuthorizations:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(id /* block */)arg1;
- (void)remote_fetchSharingAuthorizationsWithCompletion:(id /* block */)arg1;
- (void)remote_registerObservers;
- (void)remote_removeSharingAuthorizations:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_revokeWithCompletion:(id /* block */)arg1;
- (void)remote_unregisterObservers;
- (void)sharingAuthorizationManager:(id)arg1 didAddSharingAuthorizations:(id)arg2 recipientIdentifier:(id)arg3;
- (void)sharingAuthorizationManager:(id)arg1 didRemoveSharingAuthorizations:(id)arg2 recipientIdentifier:(id)arg3;
- (void)sharingAuthorizationManager:(id)arg1 didRevokeRecipientWithIdentifier:(id)arg2;

@end

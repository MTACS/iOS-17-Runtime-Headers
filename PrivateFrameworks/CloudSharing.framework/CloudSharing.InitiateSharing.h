
@interface CloudSharing.InitiateSharing : NSObject

- (void).cxx_destruct;
- (void)callForAddParticipantsToShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 reply:(id /* block */)arg7;
- (void)callForAddParticipantsToShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 reply:(id /* block */)arg5;
- (void)callForCloudKitAddToShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(bool)arg7 reply:(id /* block */)arg8;
- (void)callForCurrentUserSharingStatus:(id)arg1 reply:(id /* block */)arg2;
- (void)callForExistingShareForFile:(id)arg1 reply:(id /* block */)arg2;
- (void)callForFileSharing:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 reply:(id /* block */)arg7;
- (void)callForForciblyShareFolder:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 reply:(id /* block */)arg7;
- (void)callForMailContent:(id)arg1 share:(id)arg2 fileURL:(id)arg3 appName:(id)arg4 appIconData:(id)arg5 reply:(id /* block */)arg6;
- (void)callForMetadataFromShareURL:(id)arg1 containerSetupInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)callForRemoveShare:(id)arg1 containerSetupInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)callForSharingStatus:(id)arg1 reply:(id /* block */)arg2;
- (void)callForSharingURLAddToShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(bool)arg7 reply:(id /* block */)arg8;
- (void)callForSharingURLRemoveShare:(id)arg1 containerSetupInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)callForUpdateShare:(id)arg1 containerSetupInfo:(id)arg2 reply:(id /* block */)arg3;
- (void)callForUserNameAndEmail:(id)arg1 containerSetupInfo:(id)arg2 reply:(id /* block */)arg3;
- (id)init;

@end

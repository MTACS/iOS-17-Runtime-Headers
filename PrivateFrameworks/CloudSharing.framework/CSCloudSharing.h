
@interface CSCloudSharing : NSObject

+ (void)addParticipantsToShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)addParticipantsToShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (void)ckMetadataFromShareURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)completeShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (void)completeShare:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(bool)arg7 keepExistingParticipants:(bool)arg8 completionHandler:(id /* block */)arg9;
+ (void)existingShareForFileOrFolderURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)messageContentForMail:(id)arg1 share:(id)arg2 fileURL:(id)arg3 appName:(id)arg4 appIconData:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)removeFromShare:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)removeFromShareURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)shareFileOrFolderShareURL:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 keepExistingParticipants:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (void)shareFileOrFolderURL:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (void)shareFileOrFolderURL:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 keepExistingParticipants:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (void)shareFolderRemovingSubshares:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(long long)arg4 permissionType:(long long)arg5 allowOthersToInvite:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (void)shareOrUpdateShareURL:(id)arg1 containerSetupInfo:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4 accessType:(long long)arg5 permissionType:(long long)arg6 allowOthersToInvite:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (void)sharingStatusForFileOrFolderURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)sharingStatusForShare:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)updateShare:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)userNameAndEmail:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;

@end

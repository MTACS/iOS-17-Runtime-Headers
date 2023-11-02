
@interface _SWCollaborationMetadata : SWCollaborationMetadata

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (bool)_contentTypeIsNotFileType:(id)arg1;
+ (id)appBundleIDsFromSharingURL:(id)arg1;
+ (id)contentTypeFromCKShare:(id)arg1;

- (void)_logSelf;
- (void)checkSendReadiness;
- (void)updateInitiatorName:(id)arg1 email:(id)arg2;
- (id)updatedCollaborationMetadataAppBundleIDsWithSharingURL:(id)arg1;
- (id)updatedCollaborationMetadataContentTypeWithCKShare:(id)arg1;
- (id)updatedCollaborationMetadataWithAppBundleIDs:(id)arg1;
- (id)updatedCollaborationMetadataWithSharingURL:(id)arg1 ckShare:(id)arg2 localIdentifier:(id)arg3 collaborationIdentifier:(id)arg4 title:(id)arg5 defaultShareOptions:(id)arg6 creationDate:(id)arg7 contentType:(id)arg8 ckAppBundleIDs:(id)arg9 initiatorHandle:(id)arg10 initiatorNameComponents:(id)arg11 containerSetupInfo:(id)arg12 sourceProcessData:(id)arg13;
- (id)updatedCollaborationMetadataWithTitle:(id)arg1 contentType:(id)arg2 ckAppBundleIDs:(id)arg3;
- (id)updatedCollaborationMetadataWithUpdatedMetadata:(id)arg1 ckShare:(id)arg2 sharingURL:(id)arg3;

@end


@protocol SFCollaborationService <NSObject>

@required

- (void)requestDefaultShareModeCollaborationForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (void)createSharingURLForCollaborationRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: SFCollaborationCloudSharingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCollaborationCloudSharingResult *, void*
- (void)deleteSharingURL:(void *)arg1 containerSetupInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, CKContainerSetupInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isShareOwnerForFileURL:(void *)arg1 share:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, CKShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isShareOwnerOrAdminForFileURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)requestAddParticipantsAllowedForURL:(void *)arg1 share:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, CKShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestCollaborativeModeForContentIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)requestSharedURLForFileOrFolderURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)saveCollaborativeMode:(NSNumber *)arg1 forContentIdentifier:(NSString *)arg2;
- (void)shareStatusForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@end

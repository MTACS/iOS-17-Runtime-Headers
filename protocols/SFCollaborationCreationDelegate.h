
@protocol SFCollaborationCreationDelegate <NSObject>

@required

- (void)createSharingURLForCollaborationRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: SFCollaborationCloudSharingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCollaborationCloudSharingResult *, void*

@optional

- (void)addParticipantsAllowedForCollaborationItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <SFCollaborationItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)createSharingURLWithParticipantsForCollaborationRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: SFCollaborationCloudSharingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCollaborationCloudSharingResult *, void*
- (void)manageShareForDocumentInSharedFolder;
- (void)shareStatusForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@end


@protocol PXSharedLibrary <NSObject, NSCopying>

@required

- (void)acceptInvitationWithRule:(void *)arg1 progress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PXSharedLibraryRule *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)addAssetSharingSuggestions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <NSFastEnumeration> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)addParticipantsWithEmailAddresses:(void *)arg1 phoneNumbers:(void *)arg2 presentationEnvironment:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, <PXPresentationEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)addPersonUUIDsToPersonCondition:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)canAddParticipantsWithEmailAddresses:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2;
- (bool)canDeleteParticipants:(NSArray *)arg1;
- (bool)canEditParticipants;
- (bool)canMoveAssetsToPersonalLibrary:(id <NSFastEnumeration>)arg1;
- (bool)canMoveAssetsToSharedLibrary:(id <NSFastEnumeration>)arg1;
- (bool)canRemoveAssetSharingSuggestions:(id <NSFastEnumeration>)arg1;
- (unsigned long long)cloudItemCount;
- (unsigned long long)cloudPhotoCount;
- (unsigned long long)cloudVideoCount;
- (void)declineInvitationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteParticipants:(void *)arg1 presentationEnvironment:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, <PXPresentationEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)exitPreviewWithPresentationEnvironment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <PXPresentationEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)exitWithRetentionPolicy:(void *)arg1 presentationEnvironment:(void *)arg2 progress:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: long long, <PXPresentationEnvironment> *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })fetchItemCounts;
- (NSString *)identifier;
- (bool)isDeclined;
- (bool)isExiting;
- (bool)isInLocalMode;
- (bool)isInPreview;
- (bool)isOwned;
- (bool)isPublished;
- (void)moveAssetsToPersonalLibrary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <PXFastEnumeration> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)moveAssetsToSharedLibrary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <PXFastEnumeration> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)moveAssetsWithLocalIdentifiersToSharedLibrary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (<PXSharedLibraryParticipant> *)owner;
- (NSArray *)participants;
- (void)previewInvitationWithRule:(void *)arg1 progress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PXSharedLibraryRule *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)publishPreviewWithPresentationEnvironment:(void *)arg1 progress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <PXPresentationEnvironment> *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXSharedLibrary> *, NSError *, void*
- (void)removeAssetSharingSuggestions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <NSFastEnumeration> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removePersonUUIDsFromPersonCondition:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)restoreDeclinedInvitationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXSharedLibrary> *, NSError *, void*
- (PXSharedLibraryRule *)rule;
- (NSURL *)shareURL;
- (<PXSharedLibrarySourceLibraryInfo> *)sourceLibraryInfo;

@end

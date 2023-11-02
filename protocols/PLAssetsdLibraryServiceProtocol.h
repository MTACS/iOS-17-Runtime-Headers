
@protocol PLAssetsdLibraryServiceProtocol <NSObject>

@required

- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)createPhotoLibraryDatabaseWithOptions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getCurrentModelVersionWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (NSProgress *)importFileSystemAssetsWithReason:(void *)arg1 force:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)isLibraryReadyForImportWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)launchAssetsd;
- (void)openPhotoLibraryDatabaseWithOptions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: PLPhotoLibraryOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)pendingEventsForRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: PLXPCDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PLXPCDictionary *, void*
- (NSProgress *)postOpenProgressWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)publishRemoteChangeEvent:(void *)arg1 delayedSaveActionsDetail:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: PLXPCDictionary *, PLDelayedSaveActionsDetail *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)recoverFromCrashIfNeeded;
- (void)repairSingletonObjectsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetFaceAnalysisWithResetLevel:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)resetPersonsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)transferAssetsWithUuids:(void *)arg1 fromLibraryURL:(void *)arg2 transferOptions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSSet *, NSSecurityScopedURLWrapper *, PLInterLibraryTransferOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)transferPersonsWithUuids:(void *)arg1 fromLibraryURL:(void *)arg2 transferOptions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSSet *, NSSecurityScopedURLWrapper *, PLInterLibraryTransferOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateThumbnailsForPhotos:(void *)arg1 assignNewIndex:(void *)arg2 forceRefresh:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 8: NSArray *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSProgress *)upgradePhotoLibraryDatabaseWithOptions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end

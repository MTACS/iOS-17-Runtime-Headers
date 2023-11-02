
@protocol CPLClientLibraryManagerProtocol <NSObject>

@required

- (void)backgroundDownloadDidFailForResource:(CPLResource *)arg1;
- (void)backgroundDownloadDidFinishForResource:(CPLResource *)arg1;
- (void)downloadDidFinishForResourceTransferTask:(NSString *)arg1 finalResource:(CPLResource *)arg2 withError:(NSError *)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(NSString *)arg2;
- (void)downloadDidStartForResourceTransferTask:(NSString *)arg1;
- (void)forceSyncDidFinishForTask:(NSString *)arg1 withErrors:(NSDictionary *)arg2;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(NSString *)arg1 data:(NSData *)arg2 withError:(NSError *)arg3;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(NSDictionary *)arg1;
- (void)libraryManagerHasBeenReplaced;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerHasStatusChanges;
- (void)provideLocalResource:(void *)arg1 recordClassString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CPLResource *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResource *, unsigned long long, void*
- (void)pushAllChangesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)uploadDidStartForResource:(CPLResource *)arg1 withResourceTransferTask:(NSString *)arg2;
- (void)uploadOfResource:(CPLResource *)arg1 didFinishForResourceTransferTask:(NSString *)arg2 withError:(NSError *)arg3;
- (void)uploadOfResource:(CPLResource *)arg1 didProgress:(float)arg2 forResourceTransferTask:(NSString *)arg3;

@end

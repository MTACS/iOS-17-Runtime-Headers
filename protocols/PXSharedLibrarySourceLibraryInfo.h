
@protocol PXSharedLibrarySourceLibraryInfo <NSObject>

@required

- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })assetsCountsForAssetLocalIdentifiers:(NSArray *)arg1;
- (PXAssetsDataSourceManager *)createDataSourceManager;
- (void)createPreviewWithEmailAddresses:(void *)arg1 phoneNumbers:(void *)arg2 autoSharePolicy:(void *)arg3 startDate:(void *)arg4 personUUIDs:(void *)arg5 progress:(void *)arg6 presentationEnvironment:(void *)arg7 withCompletionHandler:(void *)arg8; // needs 8 arg types, found 14: NSArray *, NSArray *, long long, NSDate *, NSArray *, NSProgress *, <PXPresentationEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXSharedLibrary> *, NSError *, void*
- (void)createSharedLibraryWithEmailAddresses:(void *)arg1 phoneNumbers:(void *)arg2 autoSharePolicy:(void *)arg3 startDate:(void *)arg4 personUUIDs:(void *)arg5 progress:(void *)arg6 presentationEnvironment:(void *)arg7 withCompletionHandler:(void *)arg8; // needs 8 arg types, found 14: NSArray *, NSArray *, long long, NSDate *, NSArray *, NSProgress *, <PXPresentationEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXSharedLibrary> *, NSError *, void*
- (void)fetchEstimatedAssetsCountsForExit:(bool)arg1 imageCount:(unsigned long long*)arg2 videoCount:(unsigned long long*)arg3 audioCount:(unsigned long long*)arg4 itemCount:(unsigned long long*)arg5;
- (void)fetchEstimatedAssetsCountsForStartDate:(void *)arg1 personUUIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }, void*
- (void)fetchEstimatedAssetsCountsShareEverythingPolicyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }, void*
- (void)fetchSuggestedStartDateForPersonUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (bool)isCloudPhotoLibraryEnabled;
- (bool)isCloudPhotoLibraryExiting;
- (bool)isCloudPhotoLibraryInitialSyncCompleted;
- (bool)isFailedToURLFetchOwnedSharedLibraryError:(NSError *)arg1;
- (bool)isSharedLibraryNotFoundError:(NSError *)arg1;
- (bool)isSystemPhotoLibrary;
- (PHPickerConfiguration *)pickerConfiguration;
- (bool)presentCustomInformationForError:(NSError *)arg1 customTitle:(id*)arg2 customMessage:(id*)arg3;
- (bool)presentServerGeneratedMessageForError:(NSError *)arg1 customMessage:(id*)arg2 learnMoreURL:(id*)arg3;
- (PXSharedLibraryStatusProvider *)sharedLibraryStatusProvider;

@end

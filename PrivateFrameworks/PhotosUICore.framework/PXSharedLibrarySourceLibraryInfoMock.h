
@interface PXSharedLibrarySourceLibraryInfoMock : NSObject <PXSharedLibrarySourceLibraryInfo>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCloudPhotoLibraryEnabled;
@property (nonatomic, readonly) bool isCloudPhotoLibraryExiting;
@property (nonatomic, readonly) bool isCloudPhotoLibraryInitialSyncCompleted;
@property (nonatomic, readonly) bool isSystemPhotoLibrary;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;

- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })assetsCountsForAssetLocalIdentifiers:(id)arg1;
- (id)createDataSourceManager;
- (void)createPreviewWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 autoSharePolicy:(long long)arg3 startDate:(id)arg4 personUUIDs:(id)arg5 progress:(id)arg6 presentationEnvironment:(id)arg7 withCompletionHandler:(id /* block */)arg8;
- (void)createSharedLibraryWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 autoSharePolicy:(long long)arg3 startDate:(id)arg4 personUUIDs:(id)arg5 progress:(id)arg6 presentationEnvironment:(id)arg7 withCompletionHandler:(id /* block */)arg8;
- (void)fetchEstimatedAssetsCountsForExit:(bool)arg1 imageCount:(unsigned long long*)arg2 videoCount:(unsigned long long*)arg3 audioCount:(unsigned long long*)arg4 itemCount:(unsigned long long*)arg5;
- (void)fetchEstimatedAssetsCountsForStartDate:(id)arg1 personUUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchEstimatedAssetsCountsShareEverythingPolicyWithCompletion:(id /* block */)arg1;
- (void)fetchSuggestedStartDateForPersonUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)isCloudPhotoLibraryEnabled;
- (bool)isCloudPhotoLibraryExiting;
- (bool)isCloudPhotoLibraryInitialSyncCompleted;
- (bool)isFailedToURLFetchOwnedSharedLibraryError:(id)arg1;
- (bool)isSharedLibraryNotFoundError:(id)arg1;
- (bool)isSystemPhotoLibrary;
- (id)pickerConfiguration;
- (bool)presentCustomInformationForError:(id)arg1 customTitle:(id*)arg2 customMessage:(id*)arg3;
- (bool)presentServerGeneratedMessageForError:(id)arg1 customMessage:(id*)arg2 learnMoreURL:(id*)arg3;
- (id)sharedLibraryStatusProvider;

@end

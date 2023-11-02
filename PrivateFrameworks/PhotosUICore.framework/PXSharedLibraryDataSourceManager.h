
@interface PXSharedLibraryDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXSharedLibraryDataSource *dataSource;

+ (id)currentExitingDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)currentInvitationsDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)currentPreviewDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)currentSharedLibraryDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)exitingDataSourceManagerForPhotoLibrary:(id)arg1 type:(long long)arg2;
+ (id)invitationsDataSourceManagerForPhotoLibrary:(id)arg1 type:(long long)arg2;
+ (id)keyPathsAffectingCurrentExitingDataSourceManager;
+ (id)keyPathsAffectingCurrentInvitationsDataSourceManager;
+ (id)keyPathsAffectingCurrentPreviewDataSourceManager;
+ (id)keyPathsAffectingCurrentSharedLibraryDataSourceManager;
+ (id)previewDataSourceManagerForPhotoLibrary:(id)arg1 type:(long long)arg2;
+ (id)sharedLibraryDataSourceManagerForPhotoLibrary:(id)arg1 type:(long long)arg2;

- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end

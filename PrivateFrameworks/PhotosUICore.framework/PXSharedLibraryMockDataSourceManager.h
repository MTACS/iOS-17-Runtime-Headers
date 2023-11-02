
@interface PXSharedLibraryMockDataSourceManager : PXSharedLibraryDataSourceManager {
    long long  _type;
}

+ (id)_sharedLibraryMockWithType:(long long)arg1;
+ (id)invitationsDataSourceManager;
+ (id)ownerExitingDataSourceManager;
+ (id)ownerPreviewDataSourceManager;
+ (id)ownerSharedLibraryDataSourceManager;
+ (id)participantExitingDataSourceManager;
+ (id)participantPreviewDataSourceManager;
+ (id)participantSharedLibraryDataSourceManager;

- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithDataSourceType:(long long)arg1;

@end

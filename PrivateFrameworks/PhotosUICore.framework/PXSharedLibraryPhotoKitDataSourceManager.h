
@interface PXSharedLibraryPhotoKitDataSourceManager : PXSharedLibraryDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _fetchResult;
    PHPhotoLibrary * _photoLibrary;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exitingDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)invitationsDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)previewDataSourceManagerForPhotoLibrary:(id)arg1;
+ (id)sharedLibraryDataSourceManagerForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithType:(long long)arg1 fetchResult:(id)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;

@end

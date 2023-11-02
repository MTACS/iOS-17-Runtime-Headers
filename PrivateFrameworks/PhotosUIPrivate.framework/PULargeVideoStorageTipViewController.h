
@interface PULargeVideoStorageTipViewController : PUStorageManagementBaseController <PXPhotosDataSourceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)photosViewConfigurationWithShouldExpunge:(bool)arg1;
- (id)title;

@end

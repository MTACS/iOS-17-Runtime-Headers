
@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager

- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end

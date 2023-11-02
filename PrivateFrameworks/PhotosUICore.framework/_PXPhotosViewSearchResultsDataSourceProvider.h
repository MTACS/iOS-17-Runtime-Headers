
@interface _PXPhotosViewSearchResultsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {
    NSArray * _assetUUIDs;
    bool  _reverseSortOrder;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateConfiguration:(id)arg1 fromDataSourceManager:(id)arg2;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)initWithAssetUUIDs:(id)arg1 searchTitle:(id)arg2 reverseSortOrder:(bool)arg3;
- (id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)localizedInitialLoadingStatusMessageForDataSourceManager:(id)arg1;

@end

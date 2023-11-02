
@protocol PXPhotosDetailsLocationSearchDelegate <NSObject>

@optional

- (void)locationSearchDataSource:(id <PXPhotosDetailsLocationSearchDataSource>)arg1 didSelectLocationSearchResult:(id <PXPhotosDetailsLocationSearchResult>)arg2;
- (void)locationSearchDataSourceDidRemoveLocation:(id <PXPhotosDetailsLocationSearchDataSource>)arg1;
- (void)locationSearchDataSourceDidRevertLocation:(id <PXPhotosDetailsLocationSearchDataSource>)arg1;

@end


@protocol PXMutablePhotosDetailsContext <NSObject>

@required

- (PHFetchResult *)assetCollections;
- (NSDictionary *)assetsByCollection;
- (bool)hasLocation;
- (PHFetchResult *)keyAssetsFetchResult;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (PHFetchResult *)people;
- (PXPhotosDataSource *)photosDataSource;
- (void)setAssetCollections:(PHFetchResult *)arg1;
- (void)setAssetsByCollection:(NSDictionary *)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setKeyAssetsFetchResult:(PHFetchResult *)arg1;
- (void)setLocalizedSubtitle:(NSString *)arg1;
- (void)setLocalizedTitle:(NSString *)arg1;
- (void)setPeople:(PHFetchResult *)arg1;
- (void)setPhotosDataSource:(PXPhotosDataSource *)arg1;
- (void)setShouldShowMovieHeader:(bool)arg1;
- (void)setTitleFontName:(NSString *)arg1;
- (void)setUnlockDeviceStatus:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (void)setViewModel:(PXPhotosDetailsViewModel *)arg1;
- (void)setViewSourceOrigin:(long long)arg1;
- (void)setVisualLookupData:(PXPhotosDetailsVisualLookupData *)arg1;
- (bool)shouldShowMovieHeader;
- (NSString *)titleFontName;
- (id /* block */)unlockDeviceStatus:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (PXPhotosDetailsViewModel *)viewModel;
- (long long)viewSourceOrigin;
- (PXPhotosDetailsVisualLookupData *)visualLookupData;

@end

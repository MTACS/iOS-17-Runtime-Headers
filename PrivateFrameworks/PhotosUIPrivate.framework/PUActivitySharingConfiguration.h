
@interface PUActivitySharingConfiguration : NSObject {
    NSArray * _activities;
    bool  _allowsAirPlayActivity;
    bool  _allowsRemoveFromFeaturedPhotosActivity;
    bool  _allowsSuggestLessPersonActivity;
    NSDictionary * _assetsFetchResultsByAssetCollection;
    PHFetchResult * _collectionListFetchResult;
    bool  _excludeShareActivity;
    NSArray * _excludedActivityTypes;
    PHFetchResult * _initialAssetsFetchResult;
    <PXDisplayAsset> * _keyAsset;
    PHPerson * _person;
    PXPhotosDataSource * _photosDataSource;
    PUPhotoSelectionManager * _selectionManager;
    long long  _sourceOrigin;
    NSString * _subtitle;
    NSString * _title;
    bool  _wantsActionSheet;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic) bool allowsAirPlayActivity;
@property (nonatomic) bool allowsRemoveFromFeaturedPhotosActivity;
@property (nonatomic) bool allowsSuggestLessPersonActivity;
@property (nonatomic, copy) NSDictionary *assetsFetchResultsByAssetCollection;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic) bool excludeShareActivity;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, retain) PHFetchResult *initialAssetsFetchResult;
@property (nonatomic, retain) <PXDisplayAsset> *keyAsset;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) PUPhotoSelectionManager *selectionManager;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool wantsActionSheet;

- (void).cxx_destruct;
- (id)activities;
- (bool)allowsAirPlayActivity;
- (bool)allowsRemoveFromFeaturedPhotosActivity;
- (bool)allowsSuggestLessPersonActivity;
- (id)assetsFetchResultsByAssetCollection;
- (id)collectionListFetchResult;
- (bool)excludeShareActivity;
- (id)excludedActivityTypes;
- (id)initWithCollectionsFetchResult:(id)arg1 selectionManager:(id)arg2;
- (id)initialAssetsFetchResult;
- (id)keyAsset;
- (id)person;
- (id)photosDataSource;
- (id)selectionManager;
- (void)setActivities:(id)arg1;
- (void)setAllowsAirPlayActivity:(bool)arg1;
- (void)setAllowsRemoveFromFeaturedPhotosActivity:(bool)arg1;
- (void)setAllowsSuggestLessPersonActivity:(bool)arg1;
- (void)setAssetsFetchResultsByAssetCollection:(id)arg1;
- (void)setExcludeShareActivity:(bool)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setInitialAssetsFetchResult:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setSourceOrigin:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWantsActionSheet:(bool)arg1;
- (long long)sourceOrigin;
- (id)subtitle;
- (id)title;
- (bool)wantsActionSheet;

@end

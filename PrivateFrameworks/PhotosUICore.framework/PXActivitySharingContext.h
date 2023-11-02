
@interface PXActivitySharingContext : NSObject {
    NSArray * _activities;
    PHFetchResult * _assetCollectionsFetchResult;
    bool  _excludeShareActivity;
    NSArray * _excludedActivityTypes;
    <PXDisplayAsset> * _keyAsset;
    PHPerson * _person;
    PXPhotosDataSource * _photosDataSource;
    long long  _sourceOrigin;
    NSString * _subtitle;
    NSString * _title;
    bool  _wantsActionSheet;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, readonly, copy) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic) bool excludeShareActivity;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, retain) <PXDisplayAsset> *keyAsset;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool wantsActionSheet;

- (void).cxx_destruct;
- (id)activities;
- (id)assetCollectionsFetchResult;
- (bool)excludeShareActivity;
- (id)excludedActivityTypes;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 assetsDataSource:(id)arg2;
- (id)initWithAssetCollection:(id)arg1 photosDataSource:(id)arg2;
- (id)keyAsset;
- (id)person;
- (id)photosDataSource;
- (void)setActivities:(id)arg1;
- (void)setExcludeShareActivity:(bool)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setSourceOrigin:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWantsActionSheet:(bool)arg1;
- (long long)sourceOrigin;
- (id)subtitle;
- (id)title;
- (bool)wantsActionSheet;

@end

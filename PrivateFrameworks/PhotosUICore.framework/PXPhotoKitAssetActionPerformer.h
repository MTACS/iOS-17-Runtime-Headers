
@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer {
    NSArray * _assets;
    NSDictionary * _assetsByAssetCollection;
    PHFetchResult * _assetsFetchResult;
    NSString * _importSessionID;
    PXPhotoKitImportStatusManager * _importStatusManager;
    PXSectionedObjectReference * _objectReference;
    PHPerson * _person;
    PXPhotoKitAssetsDataSourceManager * _photoKitDataSourceManager;
    unsigned long long  _presentationSource;
    <PXRadarConfigurationProvider> * _radarConfigurationProvider;
    bool  _shouldSkipUserConfirmation;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSDictionary *assetsByAssetCollection;
@property (nonatomic, readonly) PHFetchResult *assetsFetchResult;
@property (nonatomic, readonly) NSDictionary *dataSourceUserInfo;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, retain) PXPhotoKitImportStatusManager *importStatusManager;
@property (nonatomic, retain) PXSectionedObjectReference *objectReference;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSourceSnapshot;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic, retain) <PXRadarConfigurationProvider> *radarConfigurationProvider;
@property (nonatomic) bool shouldSkipUserConfirmation;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;
+ (bool)canPerformOnSubsetOfSelection;
+ (bool)canPerformWithActionManager:(id)arg1;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)createActivityWithActionManager:(id)arg1;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createIndeterminateProgressToastForActionPerformer:(id)arg1 title:(id)arg2 description:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)createStandardActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (bool)shouldEnableWithActionManager:(id)arg1;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)assets;
- (id)assetsByAssetCollection;
- (id)assetsFetchResult;
- (id)createPerformerWithClass:(Class)arg1 actionType:(id)arg2;
- (id)dataSourceUserInfo;
- (void)forceIncludeAssetsInDataSource;
- (id)importSessionID;
- (id)importStatusManager;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)objectReference;
- (id)person;
- (id)photoKitDataSourceManager;
- (id)photosDataSourceSnapshot;
- (unsigned long long)presentationSource;
- (id)radarConfigurationProvider;
- (void)setImportSessionID:(id)arg1;
- (void)setImportStatusManager:(id)arg1;
- (void)setObjectReference:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhotoKitDataSourceManager:(id)arg1;
- (void)setPresentationSource:(unsigned long long)arg1;
- (void)setRadarConfigurationProvider:(id)arg1;
- (void)setShouldSkipUserConfirmation:(bool)arg1;
- (bool)shouldExitSelectModeForState:(unsigned long long)arg1;
- (bool)shouldSkipUserConfirmation;
- (void)stopExcludingAssetsFromDataSource;

@end

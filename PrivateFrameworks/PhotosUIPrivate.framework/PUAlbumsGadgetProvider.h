
@interface PUAlbumsGadgetProvider : PXGadgetProvider <PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate, PXAssetCollectionActionPerformerDelegate, PXChangeObserver, PXCollectionsDataSourceManagerObserver> {
    unsigned long long  _albumListType;
    PUAlbumListCellContentViewHelper * _contentViewHelper;
    long long  _currentDataSourceIdentifier;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PXExtendedTraitCollection * _extendedTraitCollection;
    bool  _hasClearBackgroundColor;
    bool  _hasGeneratedGadgets;
    PXPhotoKitUIMediaProvider * _mediaProvider;
}

@property (nonatomic, readonly) unsigned long long albumListType;
@property (nonatomic, retain) PUAlbumListCellContentViewHelper *contentViewHelper;
@property (nonatomic) long long currentDataSourceIdentifier;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) bool hasClearBackgroundColor;
@property (nonatomic) bool hasGeneratedGadgets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPhotoKitUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) NSString *seeAllAccessoryButtonTitle;
@property (nonatomic, readonly) bool shouldShowSeeAllAccessoryButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_albumGadgetClassForCollection:(id)arg1;
- (id)_newGadgetForCollection:(id)arg1;
- (void)_reconfigureGadgets;
- (void)_updateDataSourceWithChangeDetails:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)actionPerformerDelegateForAlbum:(id)arg1;
- (id)albumListCellContentViewHelperForAlbum:(id)arg1;
- (id)albumListCellContentViewHelperForLayout:(id)arg1;
- (unsigned long long)albumListType;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)contentViewHelper;
- (long long)currentDataSourceIdentifier;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)extendedTraitCollection;
- (id)gadgetForCollection:(id)arg1;
- (id)gadgetForIndexPath:(id)arg1;
- (id)gadgetHostingViewController;
- (void)generateGadgets;
- (bool)hasClearBackgroundColor;
- (bool)hasGeneratedGadgets;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)init;
- (id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;
- (id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3 hasClearBackgroundColor:(bool)arg4;
- (id)initWithIdentifier:(id)arg1;
- (void)loadDataForGadgets;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pauseLoadingRemainingData;
- (id)presentationEnvironmentForActionPerformer:(id)arg1;
- (id)seeAllAccessoryButtonTitle;
- (void)setContentViewHelper:(id)arg1;
- (void)setCurrentDataSourceIdentifier:(long long)arg1;
- (void)setHasGeneratedGadgets:(bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (bool)shouldShowSeeAllAccessoryButton;
- (void)startLoadingRemainingData;
- (id)undoManagerForActionPerformer:(id)arg1;

@end

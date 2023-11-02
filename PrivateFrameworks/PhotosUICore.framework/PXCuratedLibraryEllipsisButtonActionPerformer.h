
@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {
    PXCuratedLibraryActionManager * _actionManager;
    <PXCuratedLibraryLayoutAssetCollectionReferenceProvider> * _assetCollectionReferenceProvider;
    PXGLayout * _layout;
}

@property (nonatomic, readonly) PXCuratedLibraryActionManager *actionManager;
@property (nonatomic, readonly) <PXCuratedLibraryLayoutAssetCollectionReferenceProvider> *assetCollectionReferenceProvider;
@property (nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (void)_presentToUserOptionsFromActionPerformers:(id)arg1 forAssetCollectionReference:(id)arg2;
- (id)actionManager;
- (id)assetCollectionReference;
- (id)assetCollectionReferenceProvider;
- (id)buttonSpriteReference;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 actionManager:(id)arg3;
- (id)initWithViewModel:(id)arg1 assetCollectionReferenceProvider:(id)arg2 actionManager:(id)arg3;
- (id)layout;
- (void)performUserInteractionTask;
- (bool)performerResetsAfterCompletion;
- (bool)presentsMenu;
- (void)setLayout:(id)arg1;

@end

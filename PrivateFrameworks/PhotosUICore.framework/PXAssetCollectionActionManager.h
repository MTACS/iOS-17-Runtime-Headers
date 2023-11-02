
@interface PXAssetCollectionActionManager : PXActionManager {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    PHFetchResult * _assetsFetchResult;
    <UIDragSession> * _dragSession;
    <UIDropSession> * _dropSession;
    PXAssetReference * _dropTargetAssetReference;
    PXAssetCollectionReference * _initialAssetCollectionReference;
    PXDisplayTitleInfo * _internalDisplayTitleInfo;
    PHFetchResult * _people;
    <UITraitEnvironment> * _traitEnvironment;
}

@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic, retain) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, retain) PHFetchResult *assetsFetchResult;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;
@property (nonatomic) <UIDragSession> *dragSession;
@property (nonatomic) <UIDropSession> *dropSession;
@property (nonatomic, retain) PXAssetReference *dropTargetAssetReference;
@property (nonatomic, retain) PHFetchResult *people;
@property (nonatomic) <UITraitEnvironment> *traitEnvironment;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2;
- (id)assetCollectionReference;
- (id)assetsDataSourceManager;
- (id)assetsFetchResult;
- (bool)canPerformActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2;
- (id)displayTitleInfo;
- (id)displayTitleInfoForAssetCollection:(id)arg1;
- (id)dragSession;
- (id)dropSession;
- (id)dropTargetAssetReference;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;
- (id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3;
- (id)people;
- (void)setAssetsDataSourceManager:(id)arg1;
- (void)setAssetsFetchResult:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setDropSession:(id)arg1;
- (void)setDropTargetAssetReference:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setTraitEnvironment:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2;
- (id)traitEnvironment;

@end

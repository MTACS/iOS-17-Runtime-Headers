
@interface PXAssetCollectionActionPerformer : PXActionPerformer {
    PXAssetCollectionReference * _assetCollectionReference;
    PXAssetsDataSource * _assetsDataSource;
    PHFetchResult * _assetsFetchResult;
    PXDisplayTitleInfo * _displayTitleInfo;
    <UIDragSession> * _dragSession;
    <UIDropSession> * _dropSession;
    PXAssetReference * _dropTargetAssetReference;
    PHFetchResult * _people;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic, retain) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, retain) PHFetchResult *assetsFetchResult;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;
@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (nonatomic, retain) <UIDropSession> *dropSession;
@property (nonatomic, retain) PXAssetReference *dropTargetAssetReference;
@property (nonatomic, retain) PHFetchResult *people;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)assetCollectionReference;
- (id)assetsDataSource;
- (id)assetsFetchResult;
- (id)displayTitleInfo;
- (id)dragSession;
- (id)dropSession;
- (id)dropTargetAssetReference;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3;
- (id)people;
- (void)setAssetsDataSource:(id)arg1;
- (void)setAssetsFetchResult:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setDropSession:(id)arg1;
- (void)setDropTargetAssetReference:(id)arg1;
- (void)setPeople:(id)arg1;

@end

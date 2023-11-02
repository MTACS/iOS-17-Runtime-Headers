
@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput> {
    NSMapTable * __actionTypeByBarButtonItem;
    PXAssetCollectionActionPerformer * __activePerformer;
    NSDictionary * __performerClassesByType;
}

@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (setter=_setActivePerformer:, nonatomic, retain) PXAssetCollectionActionPerformer *_activePerformer;
@property (nonatomic, readonly) NSDictionary *_performerClassesByType;
@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIDragSession> *dragSession;
@property (nonatomic, readonly) <UIDropSession> *dropSession;
@property (nonatomic, readonly) PXAssetReference *dropTargetAssetReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) PHFetchResult *people;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <UITraitEnvironment> *traitEnvironment;

+ (id)actionManagerWithDataSourceManager:(id)arg1;

- (void).cxx_destruct;
- (id)_actionTypeByBarButtonItem;
- (id)_activePerformer;
- (void)_executeActionTypeIfPossible:(id)arg1 action:(id)arg2;
- (Class)_firstPossiblePerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2;
- (Class)_firstPossiblePerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 requireThatPerformerCanPerformAction:(bool)arg3;
- (void)_handleActionPerformerComplete:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleBarButtonItem:(id)arg1;
- (id)_performerClassesByType;
- (void)_setActivePerformer:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2;
- (id)activityForActionType:(id)arg1;
- (id)assetsDataSource;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3;
- (id)memoryAssetsActionFactory;
- (void)performActivity:(id)arg1;
- (id)standardActionForActionType:(id)arg1;
- (bool)supportsActionType:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2;

@end

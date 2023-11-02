
@interface PXPhotoKitAssetActionManager : PXAssetActionManager <PXActivityActionDelegate, PXPhotoLibraryUIChangeObserver> {
    NSMapTable * __actionTypeByBarButtonItem;
    PXAssetActionPerformer * __activePerformer;
    NSMutableDictionary * __performerClassByType;
    PXPhotoKitAssetsDataSourceManager * _dataSourceManager;
    NSString * _importSessionID;
    PXPhotoKitImportStatusManager * _importStatusManager;
    PHPerson * _person;
    <PXRadarConfigurationProvider> * _radarConfigurationProvider;
}

@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (setter=_setActivePerformer:, nonatomic, retain) PXAssetActionPerformer *_activePerformer;
@property (nonatomic, readonly) PXPhotosDataSource *_dataSourceSnapshot;
@property (nonatomic, readonly) NSMutableDictionary *_performerClassByType;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *importSessionID;
@property (nonatomic, retain) PXPhotoKitImportStatusManager *importStatusManager;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long presentationSource;
@property (nonatomic, retain) <PXRadarConfigurationProvider> *radarConfigurationProvider;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)selectedAssetForActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)_actionTypeByBarButtonItem;
- (id)_activePerformer;
- (id)_dataSourceSnapshot;
- (void)_handleAction:(id)arg1 actionType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleActionPerformerComplete:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleBarButtonItem:(id)arg1;
- (id)_performerClassByType;
- (id)_selectionSnapshotForPerformerClass:(Class)arg1 applySubsetIfNeeded:(bool)arg2;
- (void)_setActivePerformer:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (bool)canPerformAssetVariationActions;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)dataSourceManager;
- (void)executeActionForActionType:(id)arg1 sender:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)importSessionID;
- (id)importStatusManager;
- (id)initWithSelectionManager:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)menuElementForActionType:(id)arg1 image:(id)arg2 willStartActionHandler:(id /* block */)arg3 didEndActionHandler:(id /* block */)arg4;
- (void)performActivity:(id)arg1;
- (id)person;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (unsigned long long)presentationSource;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (id)radarConfigurationProvider;
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;
- (void)setAdditionalPropertiesFromActionManager:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setImportStatusManager:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setRadarConfigurationProvider:(id)arg1;
- (bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;
- (id)standardActionForActionType:(id)arg1;
- (bool)supportsActionType:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (void)px_registerAdditionalPerformerClasses;

@end

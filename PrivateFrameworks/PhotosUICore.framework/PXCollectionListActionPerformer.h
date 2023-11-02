
@interface PXCollectionListActionPerformer : PXActionPerformer <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    PHCollectionList * _collectionList;
    UIAlertAction * _createAlbumAlertAction;
    PHCollection * _createdCollection;
    id /* block */  _finishedPickingBlock;
}

@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (setter=_setCreateAlbumAlertAction:, nonatomic) UIAlertAction *createAlbumAlertAction;
@property (nonatomic, retain) PHCollection *createdCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finishedPickingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformActionForCollectionList:(id)arg1;
+ (id)localizedTitleForActionType:(id)arg1;

- (void).cxx_destruct;
- (void)_didChooseAlbumTitle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentPickerWithValidAlbumTitle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setCreateAlbumAlertAction:(id)arg1;
- (void)_updateCreateAlbumTextField:(id)arg1;
- (id)_validateNewCollectionTitle:(id)arg1;
- (id)collectionList;
- (id)createAlbumAlertAction;
- (void)createAlbumWithAssets:(id)arg1 albumTitle:(id)arg2;
- (id)createdCollection;
- (id /* block */)finishedPickingBlock;
- (id)initWithActionType:(id)arg1 collectionList:(id)arg2;
- (void)performUserInteractionTask;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCreatedCollection:(id)arg1;
- (void)setFinishedPickingBlock:(id /* block */)arg1;

@end

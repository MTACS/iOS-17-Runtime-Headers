
@interface NTKGreenfieldCompanionSharePhotosPickerViewController : UICollectionViewController {
    <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> * _delegate;
    NTKCompanionCustomPhotosEditor * _editor;
    NTKPhotosFace * _originalFace;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableIndexSet * _selectedIndexes;
}

@property (nonatomic) <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_createPhotosEditorWithCompletionBlock:(id /* block */)arg1;
- (void)_didTapDeselectAll;
- (void)_didTapOnCancelButton;
- (void)_didTapOnDoneButton;
- (void)_handleDidFinishWithNewResourcesDirectory:(id)arg1;
- (void)_handleEditorDidCreated;
- (void)_handleSelectionChanged;
- (id)_queue_fetchAssets;
- (id)_queue_fetchOptions;
- (void)_setupCollectionView;
- (void)_setupNavigationItems;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)initWithPhotosFace:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end

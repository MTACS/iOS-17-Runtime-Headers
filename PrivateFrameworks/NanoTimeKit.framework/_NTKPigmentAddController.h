
@interface _NTKPigmentAddController : UIViewController <UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    NTKPigmentEditOptionArray * _addedPigments;
    NTKPigmentEditOptionArray * _availablePigments;
    UICollectionView * _collectionView;
    NTKFace * _face;
    NTKFaceView * _faceView;
    NTKPigmentEditOptionArray * _removedPigments;
    NSArray * _sections;
    NSString * _slot;
    id /* block */  _willExitHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callWillExitHandlerWithChanges:(bool)arg1;
- (id)_collectionViewLayout;
- (void)_dismissWithChanges:(bool)arg1;
- (void)_donePressed;
- (void)_handleOptionsChangedNotification;
- (id)_pigmentForIndexPath:(id)arg1;
- (void)_setupPigments;
- (void)_updateSelections;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithFace:(id)arg1 faceView:(id)arg2 slot:(id)arg3 willExitHandler:(id /* block */)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

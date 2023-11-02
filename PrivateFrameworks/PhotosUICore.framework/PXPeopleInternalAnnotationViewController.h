
@interface PXPeopleInternalAnnotationViewController : UICollectionViewController <PXPeopleInternalAnnotationDataSourceDelegate, PXPeopleSwipeSelectionManagerDelegate> {
    id /* block */  _cancelCompletion;
    PXPeopleInternalAnnotationDataSource * _dataSource;
    id /* block */  _dismissCompletion;
    PHPerson * _person;
}

@property (nonatomic, readonly) id /* block */ cancelCompletion;
@property (nonatomic, readonly) PXPeopleInternalAnnotationDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) Class superclass;

+ (id)peopleAnnotationViewControllerForPerson:(id)arg1 withDismissCompletion:(id /* block */)arg2 withCancelCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (void)_commitChangesAndShowSpinner;
- (id)_initWithPerson:(id)arg1 withDismissCompletion:(id /* block */)arg2 withCancelCompletion:(id /* block */)arg3;
- (void)_nextTapped:(id)arg1;
- (void)annotationDataSourceDataChanged:(id)arg1;
- (id /* block */)cancelCompletion;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dataSource;
- (id /* block */)dismissCompletion;
- (id)getCellRegistrationForCollectionView:(id)arg1;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)person;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

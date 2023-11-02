
@interface LUILogFilterViewController : UIViewController <LUILogFilterCurrentPredicateTableViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    <LUILogFilterViewControllerDelegate> * _delegate;
    LUILogFilterView * _filterView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LUILogFilterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) LUILogFilterView *filterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_clearCellsSelection;
- (void)_clearPredicateInput;
- (void)_setupButtons;
- (void)_setupCollectionView;
- (void)_setupTableView;
- (void)_shakeInputView:(id)arg1;
- (void)_updatePredicateText;
- (void)addButtonTapped:(id)arg1;
- (void)applyButtonTapped:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)filterView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)predicateComparisonCandidates;
- (void)predicateDataUpdated;
- (id)predicateKeyCandidates;
- (void)predicateTableViewCellDeleteButtonTapped:(id)arg1;
- (id)predicateValueCandidates;
- (id)predicateValueCandidatesSize;
- (void)setDelegate:(id)arg1;
- (void)setFilterView:(id)arg1;
- (id)sizeArrayWithStrings:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillLayoutSubviews;

@end

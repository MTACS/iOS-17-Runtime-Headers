
@interface SearchUIMultiResultCollectionView : UICollectionView <SearchUIHomeScreenEngagementDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    <SearchUIFeedbackDelegateInternal> * _feedbackDelegate;
    bool  _highlightFirstCell;
    bool  _isExpanded;
    SearchUIMultiResultRowModel * _rowModel;
    NSArray * _visibleResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegateInternal> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightFirstCell;
@property (nonatomic) bool isExpanded;
@property (retain) SearchUIMultiResultRowModel *rowModel;
@property (readonly) Class superclass;
@property (retain) NSArray *visibleResults;

- (void).cxx_destruct;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)deleteIcon:(id)arg1;
- (void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;
- (id)feedbackDelegate;
- (id)focusGroupIdentifier;
- (bool)highlightFirstCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (bool)isExpanded;
- (id)rowModel;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setHighlightFirstCell:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setRowModel:(id)arg1;
- (void)setVisibleResults:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateCountsAnimated:(bool)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)visibleResults;

@end

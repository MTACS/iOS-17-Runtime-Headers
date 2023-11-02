
@interface SearchUIMultiResultCollectionViewCell : SearchUICollectionViewCell {
    TLKAuxilliaryTextView * _folderLabelView;
    SearchUIMultiResultCollectionView * _multiCollectionView;
}

@property (retain) TLKAuxilliaryTextView *folderLabelView;
@property (retain) SearchUIMultiResultCollectionView *multiCollectionView;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)folderLabelView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpandable;
- (void)layoutSubviews;
- (id)multiCollectionView;
- (bool)needsInternalFocus;
- (void)removeManualFocus;
- (void)returnKeyPressed;
- (void)setDelegate:(id)arg1;
- (void)setFolderLabelView:(id)arg1;
- (void)setMultiCollectionView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (bool)setupManualFocus;
- (struct CGSize { double x1; double x2; })sizeCollectionViewWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateExpanded:(bool)arg1 animated:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)viewForForcedFocus;
- (id)visibleResults;

@end


@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {
    SearchUIAppIconsRowView * _bottomRow;
    TLKAuxilliaryTextView * _folderLabelView;
    long long  _indexOfSelectedKeyboardIcon;
    NSArray * _results;
    SearchUIAppIconsRowView * _topRow;
}

@property (nonatomic, retain) SearchUIAppIconsRowView *bottomRow;
@property (nonatomic, retain) TLKAuxilliaryTextView *folderLabelView;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) SearchUIMultiResultRowModel *rowModel;
@property (nonatomic, retain) SearchUIAppIconsRowView *topRow;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;

- (void).cxx_destruct;
- (double)appRowVerticalSpacingForTopRowSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bottomRow;
- (bool)canSetupKeyboardHandler;
- (void)deleteIcon:(id)arg1;
- (id)folderLabelView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)indexOfSelectedKeyboardIcon;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (bool)isExpandable;
- (id)keyboardResultForFocus;
- (void)layoutSubviews;
- (bool)navigateKeyboardDown;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (bool)navigateKeyboardUp;
- (unsigned long long)numberOfVisibleResults;
- (void)removeHighlightedIconState;
- (void)removeKeyboardHandler;
- (id)results;
- (void)returnKeyPressed;
- (void)setBottomRow:(id)arg1;
- (void)setFolderLabelView:(id)arg1;
- (void)setIndexOfSelectedKeyboardIcon:(long long)arg1;
- (void)setResults:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTopRow:(id)arg1;
- (void)setupKeyboardHandler;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)topRow;
- (void)updateExpanded:(bool)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)viewForHighlightedIndex:(long long)arg1;
- (id)visibleResults;

@end

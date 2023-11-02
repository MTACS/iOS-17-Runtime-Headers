
@interface PREditingContentStyleItemsScrollableStackViewController : PREditingContentStyleItemsViewController {
    bool  _needsScrollToSelectedItem;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
}

@property (nonatomic) bool needsScrollToSelectedItem;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (double)estimatedHeight;
- (void)layoutWithItemViews:(id)arg1;
- (bool)needsScrollToSelectedItem;
- (void)scrollToSelectedItemAnimated:(bool)arg1;
- (id)scrollView;
- (void)setNeedsScrollToSelectedItem:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateInteritemSpacingIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end

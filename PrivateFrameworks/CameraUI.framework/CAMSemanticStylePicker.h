
@interface CAMSemanticStylePicker : UIView <UIScrollViewDelegate> {
    unsigned long long  __expansionAnimationCounter;
    bool  __needsUpdateContentOffset;
    UIScrollView * __scrollView;
    bool  __selectedTileExpanded;
    NSMutableArray * __spacerViews;
    NSMutableArray * __tileViews;
    double  _contentBottomMargin;
    <CAMSemanticStylePickerDelegate> * _delegate;
    long long  _material;
    UIColor * _materialColor;
    unsigned long long  _numberOfStyles;
    UIPageControl * _pageControl;
    unsigned long long  _selectedStyleIndex;
}

@property (setter=_setExpandedAnimationCounter:, nonatomic) unsigned long long _expansionAnimationCounter;
@property (setter=_setNeedsUpdateContentOffset:, nonatomic) bool _needsUpdateContentOffset;
@property (getter=_isScrollActive, nonatomic, readonly) bool _scrollActive;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (setter=_setSelectedTileExpanded:, nonatomic) bool _selectedTileExpanded;
@property (nonatomic, readonly) NSMutableArray *_spacerViews;
@property (nonatomic, readonly) NSMutableArray *_tileViews;
@property (nonatomic) double contentBottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMSemanticStylePickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long material;
@property (nonatomic) UIColor *materialColor;
@property (nonatomic) unsigned long long numberOfStyles;
@property (nonatomic, readonly) UIPageControl *pageControl;
@property (nonatomic) unsigned long long selectedStyleIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetForIndex:(unsigned long long)arg1;
- (unsigned long long)_expansionAnimationCounter;
- (bool)_isScrollActive;
- (bool)_needsUpdateContentOffset;
- (id)_scrollView;
- (bool)_selectedTileExpanded;
- (void)_setExpandedAnimationCounter:(unsigned long long)arg1;
- (void)_setNeedsUpdateContentOffset:(bool)arg1;
- (void)_setSelectedStyleIndex:(unsigned long long)arg1 shouldDelegate:(bool)arg2 shouldUpdateLayout:(bool)arg3 animated:(bool)arg4;
- (void)_setSelectedTileExpanded:(bool)arg1;
- (id)_spacerViews;
- (id)_tileViews;
- (void)_updateMaterialOpacityWithDuration:(double)arg1;
- (void)_updateScrollViewContentOffset;
- (void)_updateTileAlphas;
- (double)contentBottomMargin;
- (id)delegate;
- (bool)expanded;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)material;
- (id)materialColor;
- (unsigned long long)numberOfStyles;
- (id)pageControl;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)selectedStyleIndex;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentBottomMargin:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaterial:(long long)arg1;
- (void)setMaterial:(long long)arg1 withDuration:(double)arg2;
- (void)setMaterialColor:(id)arg1;
- (void)setNumberOfStyles:(unsigned long long)arg1;
- (void)setSelectedStyleIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })styleRectAtIndex:(unsigned long long)arg1;

@end

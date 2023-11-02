
@interface MUPagingScrollControlsView : UIView {
    bool  _automaticallyFlipsForRTL;
    bool  _hoverActive;
    UIButton * _nextPageButton;
    UIButton * _previousPageButton;
    UIView<MUScrollViewProtocol> * _scrollView;
}

@property (nonatomic) bool automaticallyFlipsForRTL;
@property (nonatomic, readonly) bool hoverActive;
@property (nonatomic, readonly) bool shouldFlipPagingDirection;

- (void).cxx_destruct;
- (void)_adjustScrollIndexByOffset:(long long)arg1;
- (void)_scrollNext;
- (void)_scrollPrevious;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateChevronVisibility;
- (bool)automaticallyFlipsForRTL;
- (void)handleHover:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)hoverActive;
- (id)initWithHorizontalScrollView:(id)arg1;
- (void)setAutomaticallyFlipsForRTL:(bool)arg1;
- (void)setHoverActive:(bool)arg1;
- (bool)shouldFlipPagingDirection;

@end

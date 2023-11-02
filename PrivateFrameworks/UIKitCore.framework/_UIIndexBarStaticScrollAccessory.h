
@interface _UIIndexBarStaticScrollAccessory : _UIStaticScrollBar <UIScrollAccessory> {
    UIView * _containerView;
    long long  _edge;
    UIIndexBarAccessoryView * _indexBarView;
    bool  _overlay;
    UIScrollView * _scrollView;
    bool  _showIndexBar;
}

@property (nonatomic) long long edge;
@property (nonatomic, readonly) UIIndexBarAccessoryView *indexBarView;
@property (nonatomic, readonly) bool overlay;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) bool shouldInsetButtonsForIndex;
@property (nonatomic) bool showIndexBar;

- (void).cxx_destruct;
- (long long)desiredAccessoryEdge;
- (long long)edge;
- (id)indexBarView;
- (void)layoutSubviews;
- (bool)overlay;
- (id)scrollView;
- (void)setEdge:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setShowIndexBar:(bool)arg1;
- (bool)showIndexBar;
- (void)update;

@end

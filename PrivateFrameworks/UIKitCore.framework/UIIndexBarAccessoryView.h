
@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory> {
    long long  _edge;
    UIScrollView * _scrollView;
}

@property (nonatomic) <UIIndexBarAccessoryViewDelegate> *delegate;
@property (nonatomic) long long edge;
@property (nonatomic, readonly) bool overlay;
@property (nonatomic) UIScrollView *scrollView;

+ (void)makeIndexBarView:(id*)arg1 scrollAccessoryContainerView:(id*)arg2 forTraits:(id)arg3;

- (void).cxx_destruct;
- (bool)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)displayEntryNearestToContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (long long)edge;
- (bool)overlay;
- (id)scrollView;
- (void)setEdge:(long long)arg1;
- (void)setEntries:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)update;

@end

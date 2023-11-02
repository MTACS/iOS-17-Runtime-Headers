
@interface SFTabViewContainerView : UIView {
    long long  _childCount;
    NSMutableDictionary * _childIndexToViewMap;
    <SFTabViewContainerViewDataSource> * _dataSource;
    bool  _extendsVisibleRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleRange;
}

@property (nonatomic) double contentOffset;
@property (nonatomic) <SFTabViewContainerViewDataSource> *dataSource;
@property (nonatomic) bool extendsVisibleRange;
@property (nonatomic, readonly) NSIndexSet *visibleChildIndexes;

- (void).cxx_destruct;
- (double)contentOffset;
- (long long)convertIndex:(long long)arg1;
- (id)dataSource;
- (bool)extendsVisibleRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForChildAtIndex:(long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)reloadDataWithPostUpdateActions:(id /* block */)arg1;
- (void)reloadViewsAtIndexes:(id)arg1;
- (void)revealChildAtFractionalIndex:(double)arg1;
- (void)revealChildAtIndex:(long long)arg1;
- (void)setContentOffset:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setExtendsVisibleRange:(bool)arg1;
- (id)visibleChildIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRangeForContentOffset:(double)arg1 nearestIndex:(long long*)arg2;

@end

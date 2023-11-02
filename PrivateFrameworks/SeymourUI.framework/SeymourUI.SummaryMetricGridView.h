
@interface SeymourUI.SummaryMetricGridView : UIView <UICollectionViewDataSource> {
    void collectionView;
    void layout;
    void metricViews;
    void metrics;
    void reuseIdentifier;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;

@end

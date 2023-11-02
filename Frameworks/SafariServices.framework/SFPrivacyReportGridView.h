
@interface SFPrivacyReportGridView : UIView <SFPrivacyReportGridItemDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSMutableArray * _cachedRowInfo;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    <SFPrivacyReportGridViewDelegate> * _delegate;
    bool  _isAccessibilitySize;
    NSArray * _itemViews;
    double  _previousCollectionViewWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFPrivacyReportGridViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, copy) NSArray *itemViews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_gridPositionForItemAtIndexPath:(id)arg1;
- (void)_rebuildRowLayoutInfoIfNeeded;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (void)didUpdateInterItemSpacing:(double)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interItemSpacing;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)itemDidChangeContentSize:(id)arg1;
- (bool)itemViewCanUseCompactWidth:(id)arg1;
- (bool)itemViewIsLineBreak:(id)arg1;
- (id)itemViews;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setItemViews:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateInterItemSpacing;

@end

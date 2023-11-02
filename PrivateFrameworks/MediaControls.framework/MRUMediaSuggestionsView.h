
@interface MRUMediaSuggestionsView : UIView {
    UICollectionView * _collectionView;
    UICollectionViewCompositionalLayout * _collectionViewLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    long long  _layout;
    bool  _supportsHorizontalLayout;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) long long layout;
@property (nonatomic) bool supportsHorizontalLayout;

- (void).cxx_destruct;
- (bool)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg1;
- (id)collectionView;
- (id)collectionViewLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)itemHeightForItemWidth:(double)arg1;
- (double)itemWidthForWidth:(double)arg1;
- (long long)layout;
- (void)layoutSubviews;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)setCollectionView:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayout:(long long)arg1;
- (void)setSupportsHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsHorizontalLayout;
- (void)updateCollectionViewLayout;

@end

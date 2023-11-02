
@interface LUILogFilterPredicateCandidateCollectionViewCell : UICollectionViewCell {
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_createTitleLabel;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubViews;
- (void)setSelected:(bool)arg1;
- (id)titleLabel;

@end

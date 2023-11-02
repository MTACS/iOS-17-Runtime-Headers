
@interface PXSearchQueryStatusFooter : UICollectionReusableView {
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)detailLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end

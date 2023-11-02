
@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView {
    UIImageView * _categoryImageView;
}

@property (nonatomic, retain) UIImageView *categoryImageView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)applyLayoutAttributes:(id)arg1;
- (id)categoryImageView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setCategoryImage:(id)arg1;
- (void)setCategoryImageView:(id)arg1;

@end

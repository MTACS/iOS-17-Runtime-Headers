
@interface SearchUILayoutFooterView : SearchUICollectionReusableView {
    UIView * _footerView;
}

@property (nonatomic, retain) UIView *footerView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)footerView;
- (void)layoutSubviews;
- (void)setFooterView:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end

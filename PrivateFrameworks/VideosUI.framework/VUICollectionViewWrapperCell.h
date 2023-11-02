
@interface VUICollectionViewWrapperCell : UICollectionViewCell {
    UIView * _childView;
}

@property (nonatomic, retain) UIView *childView;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)childView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

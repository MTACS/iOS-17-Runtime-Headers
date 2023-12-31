
@interface PXPhotosGridPromptHeaderView : UICollectionReusableView {
    UIView * _separatorView;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })_instanceLayoutSubviews:(id)arg1 forTitle:(id)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)_newTitleLabel;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forTitle:(id)arg2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end

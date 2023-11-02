
@interface VUILibraryListItemView : UIView {
    UIImage * _itemImage;
    UIImageView * _listImageView;
    VUILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, retain) UIImageView *listImageView;
@property (nonatomic, retain) VUILabel *titleLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (id)itemImage;
- (void)layoutSubviews;
- (id)listImageView;
- (void)setItemImage:(id)arg1;
- (void)setListImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end

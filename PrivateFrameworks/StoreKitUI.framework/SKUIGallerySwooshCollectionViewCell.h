
@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell {
    UIView * _contentChildView;
    UIColor * _titleColor;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *contentChildView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)contentChildView;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentChildView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
